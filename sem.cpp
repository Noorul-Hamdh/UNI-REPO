#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    while(true){
        int id;
        cin>>id;
        if(id==0){
            break;
        }
        arr.push_back(id);
    }
    int max = arr[0];
    for(int i:arr){
        if(i>max){
            max = i;
        }
    }
    for(int i=0;i<max;i++){
        if(arr[i]!=i){
            cout<<i;
        }
    }
}