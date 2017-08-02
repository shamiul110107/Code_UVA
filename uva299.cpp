#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    //freopen("t1","r",stdin);
    //freopen("t2","w",stdout);
    int a[100],i,j;
    int n,I=0,p;
    cin>>p;
    while(p--)
    {
      cin>>n;
      I=0;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(i=0;i<n;i++)
     {
        for(j=0;j<n-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                 I++;
             }
         }
    }

    cout<<"Optimal train swapping takes "<<I<<" swaps.\n";
    }
    return 0;
}
