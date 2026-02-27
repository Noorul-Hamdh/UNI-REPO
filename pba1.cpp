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
//         }
//             if(val<node->data){
//                 node->left = insert(node->left,val);
//             }else{
//                 node->right = insert(node->right,val);
//             }
//             return node;
//         }

//         Node* search(Node* node,int val){
//             if(node==nullptr)return false;
//             if(node->data==val)return true;
//             if(node->data > val){
//                 return search(node->left,val);
//             }
//             return search(node->right,val);
//         }


//         void inorder(Node* node){
//             inOrder(node->left);
//             cout<<node->data;
//             inOrder(node->right);
//         }

//         void printrange(Node* node,int l,int r){
//             if(node==nullptr){
//                 return 0;
//             }
//             if(node->data>l){
//                 printrange(node->left,l,r)
//             }
//             if(node->data>=l && node->data<=r){
//                 cout<<node->data;
//             }
//             if(node->data<r){
//                 printrange(node->right,l,r);
//             }
//         }

        
//     int height(Node* node){
//         if(node==nullptr) return 0;
//         return 1 + max(height(node->left), height(node->right));
//     }

//     bool isBalanced(Node* node){
//         if(node==nullptr) return true;

//         int lh = height(node->left);
//         int rh = height(node->right);

//         if(abs(lh-rh)>1)
//             return false;

//         return isBalanced(node->left) && isBalanced(node->right);
//     }


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
//         }







// class BST{
//     private:
//         Node* root;

//         Node* insert(Node* node, int val){
//             if(node==nullptr){
//                 return new Node(val);
//             }
//             if(val<node->data){
//                 node->left = insert(node->left, data);
//             }else{
//                 node->right = insert(node->right,data);
//             }
//             return node;
//         }

//         void Inorder(){
//             Inorder(node->left);
//             cout<<node->data;
//             Inorder(node->right);
//         }
// };




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

// class BST{
//     private:
//         Node* root;

//         Node* insert(Node* node,int val){
//             if(node==nullptr){
//                 return new Node( val);
//             }
//             if(node->data>val){
//                 node->left = insert(node->left,val);
//             }else{
//                 node->right = insert(node->right,val);
//             }
//             return node;
//         }

//         void levelorder(Node* node){
//             if(node==nullptr){
//                 return;
//             }
//             queue<Node*> q;
//             q.push(node);
//             while(!q.empty()){
//                 Node* current = q.front();
//                 q.pop();
//                 cout<<current->data;
//                 if(current->left!=nullptr){
//                     levelorder(current->left);
//                 }
//                 if(current->right!=nullptr){
//                     levelorder(current->right);
//                 }
//             }
//         }
// };


// void levelorder(Node* node){
//     if(node==nullptr)return;
//     queue<Node*> q;
//     q.push(node);
//     while(!q.empty()){
//         Node*current = q.front();
//         q.pop();
//         cout<<current->data;
//         if(current->left!=nullptr){
//             levelorder(current->left);
//         }
//         if(current->right!=nullptr){
//             levelorder(current->right);
//         }
//     }
// }



// int main(){
//     int N,E;
//     cin>>N>>E;
//     int u,v,w;
//     int adjmatrix[N+1][N+1];
//     for(int i=1;i<=E;i++){
//         cin>>u>>v>>w;
//         adjmatrix[u][v]=w;
//         adjmatrix[v][u]=w;
//     }
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             cout<<adjmatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//bfs


// void bfs(int startNode, vector<vector<int>>& adjList, vector<bool>& visited){
//     queue<int> q;
//     q.push(startNode);
//     visited[startNode]=true;
//     while(!q.empty()){
//         int curr = q.front();
//         q.pop();
//         cout<<curr<<" ";
//         for(int i=0;i<adjList.size();i++){
//             if(adjList[curr][i]==1 && !visited[i]){
//                 visited[i]=true;
//                 q.push(i);
//             }
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n,e;
//     cin>>n>>e;
//     vector<vector<int>> adjList (n,vector<int>(n,0));
//     vector<bool> visited(n,false);
//     for(int i=0;i<e;i++){
//         int u,v;
//         cin>>u>>v;
//         adjList[u][v]=1;
//         adjList[v][u]=1;
//     }
//     int startNode;
//     cin>>startnode;
//     bfs(startNode,adjList,visited);
// }



class MinHeap{
    public:
        vector<int> arr;

        void HeapifyMax(vector<int>& arr,int n,int i){
            while(true){
                int largest = i;
                int left = 2*i + 1;
                int right = 2*i + 2;

                if(left<n && arr[left] > arr[largest]){
                    largest = left;
                }
                if(right<n && arr[right] > arr[largest]){
                    largest = right;
                }
                if(largest==i){
                    break;
                }
                swap(arr[i],arr[largest]);
                i = largest;
            }
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    MinHeap heap;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n/2-1;i>=0;i--){
        heap.HeapifyMax(arr,n,i);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}