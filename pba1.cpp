#include <bits/stdc++.h>
using namespace std;

//queue using array


// class myQueue{
//     private:
//         int capacity;
//         int top;
//         int* arr;
//     public:
//         myQueue(int val){
//             capacity = val;
//             top = -1;
//             arr = new int[capacity];
//         }

//         void enqueue(int val){
//             if(top==capacity-1){
//                 cout<<"Queue is full";
                
//             }else{
//                 arr[++top]=val;
//             }
//         }

//         int dequeue(){
//             int val = arr[0];
//             for(int i=0;i<top;i++){
//                 arr[i]=arr[i+1];
//             }
//             top--;
//             return val;
//         }

//         void display(){
//             for(int i=0;i<=top;i++){
//                 cout<<arr[i]<<" ";
//             }
//         }
// };

// int main(){
//     int n;
//     cout<<"enter number of operations";
//     cin>>n;
//     myQueue q(100);
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;
//         if(str=="enqueue"){
//             int n;
//             cin>>n;
//             q.enqueue(n);
//         }
//         else if(str=="dequeue"){
//             cout<<q.dequeue();
//         }
//         else if(str=="display"){
//             q.display();
//         }
//     }
// }


//queue using linked list


// struct Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = nullptr;
//     }
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
//                 front=newNode;
//                 rear=newNode;
//             }else{
//                 rear->next = newNode;
//                 rear = newNode;
//             }
//             currsize++;
//         }

//         int dequeue(){
//             if(front==nullptr){
//                 cout<<"empty";
//             }else{
//                 Node* temp = front;
//                 int val = temp->data;
//                 front = front->next;
//                 delete temp;
//                 currsize--;
//                 return val;
//             }
//         }

//         void display(){
//             Node* temp = front;
//             while(temp!=nullptr){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
            
//         }
// };

// int main(){
//     int n;
//     cin>>n;
//     myQueue q;
//     for(int i=0;i<n;i++){
//         string str;
//         cin>>str;
//         if(str=="en"){
//             int n;
//             cin>>n;
//             q.enqueue(n);
//         }
//         else if(str=="de"){
//             cout<<q.dequeue();
//         }else if(str=="di"){
//             q.display();
//         }
//     }
// }


//Inorder traversal BST



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

//         Node* insert(Node* root,int val){
//             if(node==nullptr){
//                 return new Node(val);
//             }
//             if(val<node->data){
//                 node->left = insert(node->left,val);
//             }else{
//                 node->right = insert(node->right,val);
//             }
//             return node;
//         }


//         void inorder(){
//             inOrder(node->left);
//             cout<<node->data;
//             inOrder(node->right);
//         }

//         public:
//             BST(){
//                 root = nullptr;
//             }

//             void add(int val){
//                 root = isnert(root,val);
//             }

//             void display(){
//                 inorder(root);
//                 cout<<endl;
//             }
// }




// BST PRINT RANGE

void printRange(Node* node,int L,int R){
        if(node==nullptr) return;

        if(node->data > L)
            printRange(node->left,L,R);

        if(node->data >= L && node->data <= R)
            cout<<node->data<<" ";

        if(node->data < R)
            printRange(node->right,L,R);
    }