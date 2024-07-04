#include<iostream>
using namespace std;


    bool isPalindrome(int x) {
        long int a=0, b = x;
            while(b!=0 && x>0){
                int temp = b%10;
                a = (a * 10) + temp;
                b = b/10;
            }
        if(a == x){
            return true;
            cout<<"Yes";
        }
        return false;
    }


int main()
{
    isPalindrome(10);
    return 0;
}