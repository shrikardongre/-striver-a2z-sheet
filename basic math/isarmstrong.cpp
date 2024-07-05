#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isarmstrong(int n)
{
    int b=n;
    int num=0;
    while(n>0){
        int digit=n%10;
        num+=digit*digit*digit;
        n=n/10;
    }
    if (num==b){
        cout<<" armstrong ";
    }
    else{
        cout<<"no";
    }

}
int main()
{
    isarmstrong(153);
    return 0;
}