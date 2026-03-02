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


//linear searching

// void linearsearch(int arr[],int target,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             cout<<"Found";
//             return;
//         }
//     }
//     cout<<"Not Found";
// }

// void binarysearch(int arr[],int target,int n){
//     int low = 0;
//     int high = n -1;
//     while(low<=high){
//         int mid = low + (high - low) / 2;
//         if(arr[mid]==target){
//             cout<<"found";
//             return;
//         }
//         if(arr[mid]>target){
//             high = mid - 1;
//         }else{
//             low = mid + 1;
//         }
//     }
//     cout<<"Not FOund";
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     linearsearch(arr,target,n);
//     binarysearch(arr,target,n);
// }



//stack implementations


//stack using array



// class mystack{
//     private:
//         int capacity;
//         int top;
//         int* arr;
//     public:
//         mystack(int val){
//             capacity = val;
//             top=-1;
//             arr = new int[capacity];
//         }

//         void push(int val){
//             if(top==capacity-1){
//                 cout<<"Stack Overflow";
//                 return;
//             }else{
//                 arr[++top]=val;
//             }
//         }

//         int pop(){
//             if(top==-1){
//                 cout<<"Stack underflow";
//                 return -1;
//             }else{
//                 return arr[top--];
//             }
//         }

//         int peek(){
//             if(top==-1){
//                 cout<<"stack underflow";
//                 return -1;
//             }else{
//                 return arr[top];
//             }
//         }

//         bool isempty(){
//             return top==-1;
//         }
//         bool isfull(){
//             return top==capacity-1;
//         }

//         int sizeofstack(){
//             return top+1;
//         }
// };


//stack using linked list

// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = nullptr;
//         }
// };

// class mystack{
//     private:
//         Node* head;
//         Node* tail;
//         int count;
//     public:
//         mystack(){
//             head=nullptr;
//             tail = nullptr;
//             count = 0;
//         }

//         void push(int val){
//             Node* newNode = new Node(val);
//             newNode->next = head;
//             head = newNode;
//             count++;
//         }

//         int pop(){
//             if(head==nullptr){
//                 cout<<"Underflow";
//                 return -1;
//             }
//             Node* todelete = head;
//             head = head->next;
//             if(head==nullptr){
//                 tail = nullptr;
//             }
//             int val = todelete->data;
//             delete todelete;
//             count--;
//             return val;
//         }

//         int peek(){
//             if(head==nullptr){
//                 return -1;
//             }
//             return head->data;
//         }
// };


//stack applications


//infix to postfix 



// int precedence(char op){
//     switch(op){
//         case '*': case '/':
//             return 2;
//         case '+': case '-':
//             return 1;
//         default:
//             return 0;
//     }
// }

// int main(){
//     string str;
//     cin>>str;
//     stack<char> st;
//     string postfix = "";
//     for(char ch:str){
//         if(isalnum(ch)){
//             postfix+=ch;
//         }else if(ch=='('){
//             st.push(ch);
//         }
//         else if(ch==')'){
//             while(  !st.empty() && st.top()!='('){
//                 postfix+=st.top();
//                 st.pop();
//             }
//             st.pop();
//         }else{
//             while(!st.empty() && precedence(st.top()) >= precedence(ch)){
//                 postfix += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }
//     while(!st.empty()){
//         postfix+=st.top();
//         st.pop();
//     }
//     cout<<postfix;
// }



//queue



//queue using array

// class myQueue{
//     public:
//         int capacity;
//         int top;
//         int* arr;

//         myQueue(int val){
//             capacity = val;
//             top = -1;
//             arr = new int[capacity];
//         }

//         void enqueue(int val){
//             if(top==capacity-1){
//                 cout<<"Queue is full";
//                 return;
//             }else{
//                 arr[++top]=val;
//             }
//         }

//         int dequeue(){
//             if(top==-1){
//                 cout<<"Queue is empty";
//                 return -1;
//             }else{
//                 int val = arr[0];
//                 for(int i=0;i<top;i++){
//                     arr[i]=arr[i+1];
//                 }
//                 top--;
//                 return val;
//             }
//         }

//         int peek(){
//             return arr[0];
//         }
// };


//queue using linked list

// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = nullptr;
//         }
// };

// class myQueue{
//     private:
//         Node* front;
//         Node* rear;
//         int currsize;
//     public:
//         myQueue(){
//             front = nullptr;
//             rear = nullptr;
//             currsize = 0;
//         }

//         void enqueue(int val){
//             Node* newNode = new Node(val);
//             if(front==nullptr){
//                 front = newNode;
//                 rear = newNode;
//             }else{
//                 rear->next = newNode;
//                 rear = newNode;
//             }
//             currsize++;
//         }

//         int dequeue(){
//             if(front==nullptr){
//                 cout<<"Queue is empty";
//                 return -1;
//             }
//             Node* temp = front;
//             int val = temp->data;
//             front = front->next;
//             if(front==nullptr){
//                 rear=nullptr;
//             }
//             delete temp;
//             currsize--;
//             return val;
//         }

//         int peek(){
//             if(front==nullptr)return -1;
//             return front->data;
//         }
//     };


//BST


// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = nullptr;
//             right = nullptr;
//         }
// };

// class bst{
//     private:
//         Node* root;

//         Node* insert(Node* node,int val){
//             if(node==nullptr)return new Node(val);

//             if(val<node->data){
//                 node->left = insert(node->left,val);
//             }
//             if(val>node->data){
//                 node->right = insert(node->right,val);
//             }
//             return node;
//         }


//         void inorder(Node* node){
//             if(node==nullptr)return;
//             inorder(node->left);
//             cout<<node->data;
//             inorder(node->right);
//         }

//         Node* search(Node* node,int val){
//             if(node==nullptr)return 0;
//             if(node->data==val){
//                 cout<<"Found";
//                 return 0;
//             }
//             if(val<node->data){
//                 return search(node->left,val);
//             }
//             return search(node->right,val);
//         }

//         void printrange(Node* node,int l,int r){
//             if(node->data>l){
//                 printrange(node->left,l,r);
//             }
//             if(node->data>=l && node->data<=r){
//                 cout<<node->data<<" ";
//             }
//             if(node->data<r){
//                 printrange(node->right,l,r);
//             }
//         }

//     public:
//         bst(){
//             root = nullptr;
//         }

//         void add(int val){
//             root = insert(root,val);
//         }

//         void display(){
//             inorder(root);
//             cout<<endl;
//         }
// };



//bst deletion



// Node* findMin(Node* node){
//     while(node->left != nullptr){
//         node = node->left;
//     }
//     return node;
// }

// Node* deleteNode(Node* node, int val){
//     if(node == nullptr)
//         return nullptr;

//     if(val < node->data){
//         node->left = deleteNode(node->left, val);
//     }
//     else if(val > node->data){
//         node->right = deleteNode(node->right, val);
//     }
//     else{
//         // Case 1: No child
//         if(node->left == nullptr && node->right == nullptr){
//             delete node;
//             return nullptr;
//         }

//         // Case 2: One child
//         else if(node->left == nullptr){
//             Node* temp = node->right;
//             delete node;
//             return temp;
//         }
//         else if(node->right == nullptr){
//             Node* temp = node->left;
//             delete node;
//             return temp;
//         }

//         // Case 3: Two children
//         else{
//             Node* successor = findMin(node->right);
//             node->data = successor->data;
//             node->right = deleteNode(node->right, successor->data);
//         }
//     }

//     return node;
// }



//BST: BFS



// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int val){
//             data = val;
//             left = right = nullptr;
//         }

// };

// class BST{
//     private:
//         Node* root;

//         Node* insert(Node* node,int val){
//             if(node==nullptr)return new Node(val);
//             if(node->data>val){
//                 node->left = insert(node->left,val);
//             }else{
//                 node->right = insert(node->right,val);
//             }
//             return node;
//         }
        
//         void inorder(Node* node){
//             if(node==nullptr)return;
//             inorder(node->left);
//             cout<<node->data;
//             inorder(node->right);
//         }

//         void levelorder(Node* node){
//             if(node==nullptr)return;
//             queue<Node*> q;
//             q.push(node);
//             while(!q.empty()){
//                 Node* curr = q.front();
//                 q.pop();
//                 cout<<curr->data<<" ";
//                 if(curr->left!=nullptr){
//                     levelorder(node->left);
//                 }
//                 if(curr->right!=nullptr){
//                     levelorder(node->right);
//                 }
//             }
//         }


//         void bfs(int startNode, vector<vector<int>>& adjList, vector<bool>& visited){
//             queue<int> q;
//             q.push(startNode);
//             visited[startNode] = true;
//             while(!q.empty()){
//                 int curr = q.front();
//                 q.pop();
//                 cout<<curr<<" ";
//                 for(int i=0;i<adjList.size();i++){
//                     if(adjList[curr][i]==1 && !visited[i]){
//                         visited[i]=true;
//                         q.push(i);
//                     }
//                 }
//             }
//         }


        
//         public:
//             BST(){
//                 root = nullptr;
//             }
//             void add(int val){
//                 root = insert(root,val);
//             }

//             void add(){
//                 inorder(root);
//             }
// };


//adjaceny matrix and adjacency list



// int main(){
//     int N,E;
//     cin>>N>>E;
//     vector<vector<int>> adjMatrix(N+1,vector<int>(N+1,0));
//     vector<vector<int>> adjList(N,vector<int>(N,0));
//     vector<bool> visited(n,false);
//     int u,v,w;
//     for(int i=1;i<=E;i++){
//         cin>>u>>v>>w;
//         adjMatrix[u][v]=w;
//         adjMatrix[v][u]=w;
//     }
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             cout<<adjMatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


class stack{
    private:
    
};

