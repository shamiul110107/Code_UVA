#include <iostream>

using namespace std;



int main()
{
     long int a,b;
     long  int j,c,m,k,l,i;
    while(cin>>a>>b&&(a&&b))
    {

    if(a>b)
     {
         int h=b;
         b=a;
         a=h;

     }
    k=0;
    for(i=a;i<=b;i++)
    {
         j=i;
         c=0;
         m=i;
        do
        {
            if(m&1)
            {
                (m*=3)++;
            }
            else
            {
                m=m>>1;
            }
            c++;
        }while(m!=1);
        if(c>k)
        {
            l=j;
            k=c;
        }
    }
        cout<<"Between "<<a<<" and "<<b<<", "<<l<<" generates the longest sequence of "<<k<<" values.\n";
    }
    return 0;
}
