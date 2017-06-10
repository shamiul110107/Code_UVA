#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;
    bool cmp (const char ch1, const char ch2)
     {
        if (tolower(ch1) < tolower(ch2)) return true;
        else if (tolower(ch1) == tolower(ch2)) return ch1 < ch2;
        else return false;
    }
int main()
{
  long int n,i;
  char a[100010];
  cin>> n;
  while(n--)
  {
      cin>>a;
      sort(a,a+strlen(a),cmp);
      do{
          for(i=0;i<strlen(a);i++)
          {
              cout<<a[i];
          }
          cout<<endl;
      }while(next_permutation(a,a+strlen(a),cmp));


  }
    return 0;
}
