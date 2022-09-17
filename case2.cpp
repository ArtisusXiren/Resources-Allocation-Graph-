#include<iostream>
using namespace std;
//case 2
int Resource[20][20]; 
void displayMatrix(int v,int u) {
   int i, j;
   cout<<"Resource Allocated to Process: "<<endl;
   for(i = 1; i <=v; i++) {
      for(j = 1; j <=u; j++) {
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
   int x,v,z,y;
   cout<<"Enter the Process: "<<endl;
   cin>>v;
   cout<<"Enter the Resource: "<<endl;
   cin>>y;
   cout<<"Enter the Process and Instance Allocated: "<<endl;
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   cin>>x>>z;
   add_edge(x, z);
   displayMatrix(v,y);
   return 0;
}
