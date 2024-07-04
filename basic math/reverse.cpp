#include<iostream>
using namespace std;
int reverse(int n )
{
    int renum=0;
    while (n>0){
        int digit=n%10;
        renum=(renum)*10+digit;
        n=n/10;
    }
    return renum;
}
int main()
{ 
    cout<< reverse(789);
    return 0;
}
//////////////////////////////////
/*
#include <limits.h> // For INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        int renum = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow before updating renum
            if (renum > INT_MAX / 10 || (renum == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (renum < INT_MIN / 10 || (renum == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            renum = renum * 10 + digit;
        }

        return renum;
    }
};

*/