#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char , int>mp;
    string a[100010];
    long int i = 0, k = 0 , j;
    while(cin>>a[k++]){
        if(a[k-1]=="#")break;
    }
       for(i=0;i<20;i++)
        {
            for(j=0;j<k-1;j++)
             {
                if(i<a[j].length())
                {
                    if(mp[a[j][i]]!=1)
                    {
                        cout << a[j][i];
                        mp[a[j][i]] = 1;
                    }
                }
            }
       }
       cout << endl;
    return 0;
}
