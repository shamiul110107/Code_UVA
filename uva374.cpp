#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
typedef   long long uLL;
using namespace std;


uLL big_mod(uLL n , int p,int m){
 if(p==0)
    return 1;
 else if (p%2 == 0){
     uLL ret = big_mod(n,p/2 , m);
     return ((ret%m)*(ret%m))%m;
 }
 else
    return (big_mod(n,p-1,m)*(n%m))%m;
}

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    uLL n , p;
    uLL m;
    while(cin >> n >> p >> m){
         cout <<  big_mod(n,p,m)<<endl;
    }



    return 0;
}
