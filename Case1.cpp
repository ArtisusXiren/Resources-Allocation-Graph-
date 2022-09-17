#include<iostream>
using namespace std;
//case 1
int Resource[20][20]; 
void displayMatrix(int v) {
   int i, j;
   cout<<"Resource Allocated to Process: "<<endl;
   for(i = 1; i <=v; i++) {
      for(j = 1; j <=v; j++) {
         cout << Resource[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {     
   Resource[u][v] = 1;
   Resource[v][u] = 1;
}
int main(int argc, char* argv[]) {
   int x,v,z;
   cout<<"Enter the range: "<<endl;
   cin>>v;
   cout<<"Enter the Process and Resource Allocated: "<<endl;
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   displayMatrix(v);
   return 0;
}
