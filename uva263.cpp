                          /***********************************\
                          |                               _   |
                          |   |-----|  -----  |-|   |-|  | |  |
                          |   |       |     | | |   | |  | |  |
                          |   |       |     | |  |_|  |  | |  |
                          |   |-----| | --- | |       |  | |  |
                          |         | |     | |       |  | |  |
                          |         | |     | |       |  | |  |
                          |   |-----| |     | |       |  |_|  |
                          |   ------------------------------  |
                          |                                   |
                          |       MD.SHAMIUL ISLAM            |
                          |       CSE , 2010-2011             |
                          |       ID:   110107                |
                          |       INST: (PUST) , PABNA;       |
                          |       shamiulcse.pust@gmail.com   |
                          |                                   |
                          ************************************/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
#include <math.h>
#include <vector>
#include <bitset>
#include <stdlib.h>
#include <set>


using namespace std;

int main()
{
    long n;
    char ch[15],ass[15],des[15];
    while(cin >> n){

        if(n==0)return 0;
        printf("Original number was %ld\n",n);
        sprintf(ch,"%d",n);
        sort(ch,ch + strlen(ch));
        strcpy(ass,ch);
        long second = atol(ass);
        reverse(ch,ch+strlen(ch));
        strcpy(des,ch);
        long first = atol(des);
        long diff = first - second;
        long count = 1;
        printf("%lld - %ld = %ld\n",first,second,diff);
        map<long , bool>mp;
        while(mp[diff]==false){
                mp[diff] = true;
                count++;
                sprintf(ch,"%d",diff);
                sort(ch,ch + strlen(ch));
                strcpy(ass,ch);
                second = atol(ass);
                reverse(ch,ch+strlen(ch));
                strcpy(des,ch);
                 first = atol(des);
                 diff = first - second;
                printf("%ld - %ld = %ld\n",first,second,diff);
        }

 cout << "Chain length " << count << endl << endl;

    }
    return 0;
}
