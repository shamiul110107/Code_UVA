#include<stdio.h>
#include<iostream>
// sami
using namespace std;
int main()
{
int n1, n2, i, k, a, n,a1,s;
freopen("file_input","r",stdin);
freopen("file_output","w",stdout);
while(scanf("%d %d", &n1, &n2)==2&&(n1!=0&&n2!=0)){
cout<<"Between "<<n1<<" and "<<n2<<", ";
if( n1>n2)
{
a=n1;
n1=n2;
n2=a;
}
a = 0;
for( i=n1; i<=n2; i++)
{
k = 0;
n=i;
a1=i;
while(n!=1)
{
if( n%2)
{
n*=3;
n+=1;
}
else
n/=2;
k++;
}
if( k>a)
{
 a=k;
 s=a1;
}
}
cout<<s<<" generates the longest sequence of "<<a<<" vlaues.\n";
}
return 0;
}
