#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    double n,p,s;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        s=pow(p,1/n);
        printf("%.0lf\n",s);

    }
    return 0;
}
