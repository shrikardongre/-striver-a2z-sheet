#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    bool flag=false;
    
    int temp=n;
    int digits=0;
    while(temp>0){
     temp=temp/10;
     digits++;
    }
    int j=0;
    int square=n*n;
    int lastdigit=0;
    int lastnum=0;
    while(j<digits){
        lastdigit=square%10;
        lastnum=lastnum+(lastdigit*pow(10,j));
        square = square / 10;
        j++;
        
    }
    if(lastnum==n){
        flag=true;
    }
    return flag;
}
int main()
{   int k;
 cout<<"Give input"<<endl;
   cin>>k;
    int n;
    while(k--){
        cin>>n;
        if (check(n)){
            cout<<"yes";

        }
        else{
            cout<<"no";
        }
    }
    return 0;
}