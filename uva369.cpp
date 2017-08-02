#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int first,second,temp,i;
    unsigned long long r;
    while((cin>>first>>second)&&((first!=0)||(second!=0)))
    {
        r=1;
        temp=second;
        if(second>(first/2))
        {
            temp=first-second;
        }
        for(i=0;i<temp;i++)
         {
             r=r*(first-i);
             r=r/(1+i);
         }
         cout<<first<<" things taken "<<second<<" at a time is "<<r<<" exactly.\n";
    }
    return 0;
}
