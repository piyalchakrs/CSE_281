#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main (){
    for ( int a =1; a<3;a++){
        cout << "Figure : " << a << endl;

        int m ,s,node, edge;

        cout << "number of nodes:";
        cin >> node;

        cout << "number of edges:";
        cin >> edge;

        vector<vector<int>> adj_matrix(node, vector<int>(node,0));

        cout<<"give the edge connections : "<< endl;
        for (int i=0;i<edge;i++){
            cin>>m>>s;
            adj_matrix[m][s]=1;
            adj_matrix[s][m]=1;
        }

        cout << "adjacency matrix for figure: "<<a <<endl;
        for(int j=0;j<node;j++){
            for(int k=0; k<node;k++){
                cout << adj_matrix[j][k]<< "\t";
            }
            cout <<endl;
        }
    }
    return 0;
}