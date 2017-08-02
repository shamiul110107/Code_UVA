#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long int n,a,b,k,m,c,i,j,s;
    cin>>n;
    while(n--)
    {

        cin>>a>>b;
        m=0;
        for(i=a;i<=b;i++)
        {
             s=i;
             k=0;
        for ( j = 1; j * j <= i; j++)
            {
                if (j * j == i)
                    {
                        k += 1;
                    }
                else if (i % j == 0)
                    {
                        k += 2;
                    }
            }
            if(k>m)
            {
                m=k;
                c=s;
            }

        }
        cout<<"Between "<<a<<" and "<<b<<", "<<c<<" has a maximum of "<<m<<" divisors.\n";
    }
    return 0;
}
