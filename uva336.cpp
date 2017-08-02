
                          /***********************************\
                          |                               _   |
                          |   |-----|  -----  |-|   |-|  | |  |
                          |   |       |     | | |   | |  | |  |
                          |   |       |     | |  |_|  |  | |  |
                          |   |-----| | --- | |       |  | |  |
                          |         | |     | |       |  | |  |
                          |         | |     | |       |  | |  |
                          |   |-----| |     | |       |  |_|  |
                          |   ------------------------------  |
                          |                                   |
                          |       MD.SHAMIUL ISLAM            |
                          |       CSE , 2010-2011             |
                          |       ID:   110107                |
                          |       INST: (PUST) , PABNA;       |
                          |       shamiulcse.pust@gmail.com   |
                          |                                   |
                          ************************************/


#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
#include <map>
using namespace std;

 int N , i , j;
 int U , V;
 vector<int>G[70];
 int  visited[70];
 int BFS(int from , int to){

    queue<int>Q;
    memset(visited,-1,sizeof visited);
    visited[from]=0;
    Q.push(from);
    int num=0;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(j=0;j<G[u].size();j++){
            int v = G[u][j];
            if(visited[v]==-1){
                visited[v] = visited[u]+1;
                if(visited[v]>to)break;
                num++;
                Q.push(v);
            }
        }
    }

   return num;
 }

int main()
{
    int caseno=1;
   while(scanf("%d",&N)==1){
         map<int , int>pos;
        if(N==0)break;
        int count = 0;
int k =1;
     for(i=0;i<N;i++){
        scanf("%d%d",&U,&V);
        if(pos[U]==0)
        {
            pos[U]=k++;
            count++;
        }
        if(pos[V]==0)
        {
            pos[V]=k++;
            count++;
        }
        G[pos[U]].push_back(pos[V]);
        G[pos[V]].push_back(pos[U]);
     }
     while(scanf("%d%d",&U,&V)==2){
        if((U+V)==0)break;

         printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",caseno++,(count- BFS(pos[U],V)-1),U,V);
     }
     for(i=0;i<70;i++)
        G[i].clear();

   }

    return 0;
}
