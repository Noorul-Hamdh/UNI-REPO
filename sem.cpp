#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
 using namespace std;

//setting row and col to 0, hashing

// void setZeroes(vector<vector<int>>& matrix){
//     if(matrix.empty())return ;
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<bool> rowwilt(n,false);
//     vector<bool> colwilt(n,false);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 rowwilt[i] = true;
//                 colwilt[j] = true;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(rowwilt[i] || colwilt[j]){
//                 matrix[i][j]=0;
//             }
//         }
//     }
// }

// int main(){
//     int n,e;
//     cin>>n>>e;
//     if(n<0 || e<0){
//         cout<<"Invalid input";
//         return 0;
//     }
//     vector<vector<int>> matrix(n,vector<int>(e));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<e;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     setZeroes(matrix);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<e;j++){
//             cout<<matrix[i][j]<<" ";

//         }
//         cout<<endl;
//     }
// }



//hashing code example mid square
// #include <iostream>
// #include <string>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// int generateHash(int value) {
//     if (value < 0) return -1;

//     long long squared = (long long)value * value;
//     string s = to_string(squared);
//     int len = s.length();

//     if (len <= 4) {
//         return stoi(s);
//     }

//     int start = (len - 4) / 2;
//     string middle = s.substr(start, 4);
//     return stoi(middle);
// }

// int main() {
//     string input;
//     cin >> input;

//     for (char c : input) {
//         if (!isdigit(c)) {
//             cout << "Invalid input" << endl;
//             return 0;
//         }
//     }

//     int value = stoi(input);
//     int result = generateHash(value);

//     if (result == -1) {
//         cout << "Invalid input" << endl;
//     } else {
//         cout << result << endl;
//     }

//     return 0;
// }


//singly linked list creation, insertion at start,mid,end


// class Node{
//     public:
//         int data;
//         Node* next;
   
//         Node(int val){
//             data = val;
//             next = nullptr;
//         }
// };

// int main(){
//     int n;
//     cin>>n;
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     for(int i=0;i<n;i++){
//         int id;
//         cin>>id;
//         Node* newNode = new Node(id);
//         if(head==nullptr){
//             head = newNode;
//             tail = newNode;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     int val;
//     Node* insert = new Node(val);
//     int pos;
//     cin>>pos;
//     int size;
//     //insertiong at start and specific part
//     if(pos==0){
//         insert->next = head;
//         head = insert;
//     }
//     //insertion at end
//     else if(pos==size){
//     tail->next = insert;
//     tail = insert;
//     }
//     else{
        
//         Node* temp = head;
//         for(int i=0;i<pos-1;i++){
//             temp = temp->next;
//         }
//         insert->next = temp->next;
//         temp->next = insert;
//     }
// }



// //singly deletion
// int main(){
//     int n;
//     cin>>n;
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     for(int i=0;i<n;i++){
//         int id;
//         cin>>id;
//         Node* newNode = new Node(id);
//         if(head==nullptr){
//             head=tail=newNode;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     int pos;
//     cin>>pos;
//     if(pos==0){
//         Node* temp = head;
//         head = head->next;
//         if(head==nullptr)tail=nullptr;
//         delete temp;
//     }else{
//         Node* temp = head;
//         for(int i=0;i<pos-1;i++){
//             temp=temp->next;
//         }
//         Node* todelete = temp->next;
//         temp->next = temp->next->next;
//         if(todelete==tail){
//             tail = temp;
//         }
//         delete todelete;
        
//     }
// }


//doubly
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* prev;

//         Node(int val){
//             data = val;
//             next = nullptr;
//             prev = nullptr;
//         }
// };


// //doubly creation, insertion
// int main(){
//     int n;
//     cin>>n;
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     for(int i=0;i<n;i++){
//         int id;
//         cin>>id;
//         Node* newNode = new Node(id);
//         if(head==nullptr){
//             head=tail=newNode;
//         }else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }
//     int pos;
//     cin>>pos;
//     int val;
//     cin>>val;
//     int size;
//     Node* insert = new Node(val);
//     if(pos==0){
//         insert->next = head;
//         head->prev = insert;
//         head = insert;
//     }else if(pos==size)
//         {
//             tail->next = insert;
//             insert->prev = tail;
//         }
//         else{
//         Node* temp = head;
//         for(int i=0;i<pos-1;i++){
//             temp = temp->next;
//         }
//         //10 20 30 40 50 60
//         insert->next = temp->next;
//         insert->prev = temp;
//         temp->next->prev = insert;
//         temp->next = insert;
//     }
// }



//doubly deletion

// int main(){
    
//     int n;
//     cin>>n;
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     for(int i=0;i<n;i++){
//         int id;
//         cin>>id;
//         Node* newNode = new Node(id);
//         if(head==nullptr){
//             head=tail=newNode;
//         }else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }
//     int pos;
//     cin>>pos;
//     //10 20 30 40 50 60
//     if(pos==0){
//         Node* temp = head;
//         head = head->next;
//         if(head!=nullptr){
//             head->prev = nullptr;
//         }else{
//             tail = nullptr;
//         }
//         delete temp;
//     }else{
//         Node* temp = head;
//         //10 20 30 40 50 60
//         for(int i=0;i<pos;i++){
//             temp = temp->next;
//         }
//         Node* todelete = temp;
//         temp->prev->next = temp->next;
//         if(temp->next!=nullptr){
//             temp->next->prev = temp->prev;
//         }else{
//             tail = temp->prev;
//         }
//         delete todelete;
//     }
// }




//circular linked list



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = nullptr;
//     }
// };

// int main(){

//     int n;
//     cin >> n;

//     Node* head = nullptr;

//     // Creating circular linked list
//     for(int i = 0; i < n; i++){
//         int val;
//         cin >> val;

//         Node* newNode = new Node(val);

//         if(head == nullptr){
//             head = newNode;
//             newNode->next = head;
//         }
//         else{
//             Node* temp = head;
//             while(temp->next != head){
//                 temp = temp->next;
//             }

//             temp->next = newNode;
//             newNode->next = head;
//         }
//     }

//     // DISPLAY
//     if(head != nullptr){
//         Node* temp = head;
//         do{
//             cout << temp->data << " ";
//             temp = temp->next;
//         }while(temp != head);
//         cout << endl;
//     }

//     // INSERTION
//     int posInsert, valInsert;
//     cin >> posInsert >> valInsert;

//     Node* insert = new Node(valInsert);

//     if(head == nullptr){
//         head = insert;
//         insert->next = head;
//     }
//     else if(posInsert == 0){
//         Node* temp = head;
//         while(temp->next != head){
//             temp = temp->next;
//         }

//         insert->next = head;
//         temp->next = insert;
//         head = insert;
//     }
//     else{
//         Node* temp = head;
//         for(int i = 0; i < posInsert - 1; i++){
//             temp = temp->next;
//         }

//         insert->next = temp->next;
//         temp->next = insert;
//     }

//     // DISPLAY AFTER INSERT
//     if(head != nullptr){
//         Node* temp = head;
//         do{
//             cout << temp->data << " ";
//             temp = temp->next;
//         }while(temp != head);
//         cout << endl;
//     }

//     // DELETION
//     int posDelete;
//     cin >> posDelete;

//     if(head != nullptr){

//         if(posDelete == 0){

//             if(head->next == head){
//                 delete head;
//                 head = nullptr;
//             }
//             else{
//                 Node* temp = head;
//                 while(temp->next != head){
//                     temp = temp->next;
//                 }

//                 Node* todelete = head;
//                 head = head->next;
//                 temp->next = head;
//                 delete todelete;
//             }
//         }
//         else{
//             Node* temp = head;
//             for(int i = 0; i < posDelete - 1; i++){
//                 temp = temp->next;
//             }

//             Node* todelete = temp->next;
//             temp->next = todelete->next;
//             delete todelete;
//         }
//     }

//     // FINAL DISPLAY
//     if(head != nullptr){
//         Node* temp = head;
//         do{
//             cout << temp->data << " ";
//             temp = temp->next;
//         }while(temp != head);
//         cout << endl;
//     }

//     return 0;
// }