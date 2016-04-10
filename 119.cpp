#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>

using namespace std;

int main()
{
     //freopen("INP","w",stdin);
    freopen("INP","r",stdin);
    int n,m,l,i,j,k;
   string arr[100];
    string a[100];
    map<string,int>M;
    bool flag = false;

    while(cin>> n){
            if(flag)cout<<endl;
    flag = true;
        for(i=0;i<n;i++)
        {
            cin>> a[i];
            M[a[i]]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>> arr[i] >> m >> l;
            if(l!=0)
               {
                   m = m/l;
               }
               for(k=0;k<n;k++)
               {
                   if(arr[i]==a[k])
                    M[a[k]] -=(m*l);
               }
            for(j=0;j<l;j++)
            {
                cin >> arr[j];
                for(k=0;k<n;k++)
               {
                   if(arr[j]==a[k])
                    M[a[k]] +=m;
               }
            }

        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<M[a[i]]<<endl;
        }
        cout<<endl;
        M.clear();
    }

    return 0;
}
