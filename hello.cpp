#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main(){
    Node newNode;
    newNode.data = 10;
    newNode.next = NULL;
    cout<<newNode.data<<" "<<newNode.next;
    return 0;

}