#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N,E;
    cin >> N >> E;

    // Adjacency Matrix
    vector<vector<int>> adjMatrix(N+1, vector<int>(N+1,0));

    // Adjacency List (1D vector)
    vector<vector<pair<int,int>>> adjList(N+1);

    int u,v,w;

    for(int i=1;i<=E;i++){
        cin >> u >> v >> w;

        // Matrix
        adjMatrix[u][v] = w;
        adjMatrix[v][u] = w;

        // List
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    // Print Adjacency Matrix
    cout<<"Adjacency Matrix:\n";
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // Print Adjacency List
    cout<<"\nAdjacency List:\n";
    for(int i=1;i<=N;i++){
        cout<<i<<" -> ";
        for(auto x : adjList[i]){
            cout<<"("<<x.first<<","<<x.second<<") ";
        }
        cout<<endl;
    }

}