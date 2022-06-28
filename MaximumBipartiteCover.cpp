#include <iostream>
using namespace std;

bool bipGraph[20][20];
int printbipGraph[20][20];

bool bip_Max(int u, bool visited[], int a[],int M,int N) {
    for (int v = 0; v < N; v++) {
    if (bipGraph[u][v] && !visited[v]) {
        visited[v] = true;
        if (a[v] < 0 || bip_Max(a[v], visited, a,M,N)) {
            a[v] = u;
            printbipGraph[u][v]=1;
            return true;
            }
        }
    }
    return false;
}
int max_Pair(int M,int N) {
    int a[N];
    for(int i = 0; i<N; i++)
        a[i] = -1;
    int count = 0;
    for (int u = 0; u < M; u++) {
        bool visited[N];
        for(int i = 0; i<N; i++)
            visited[i] = false;
            if (bip_Max(u, visited, a,M,N))
                count++;
        }
    return count;
}
int main() {
    int M,N;
    cout<<"Enter the number of elements in subset M and N"<<endl;
    cin>>M>>N;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<M;i++)
    {
        cout<<"Row "<<i+1<<" Elements :"<<endl; 
        for(int j=0;j<N;j++)
        {
            cin>>bipGraph[i][j];
        }
    }
    cout << "Maximum Matching Bipartite Pair " << max_Pair(M,N)<<endl;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<printbipGraph[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
