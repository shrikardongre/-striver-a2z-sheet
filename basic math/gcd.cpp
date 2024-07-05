#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd (int n1,int n2){
    int gcd =1;
    if (n1==n2 ){
        gcd =n1 ;
    }
    else{
        for (int i=1;i<=min(n1,n2);i++){
            if (n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
    }
    return gcd ;


}
int main()
{
    cout<<gcd(5,15);
    return 0;
}