#include<iostream>
using namespace std;
long long int count (long long int n ){
    int count =0;
    
    while (n>0){
       long long  int digit=n%10;
        count ++;
        
        n=n/10;
        
    }
    return count ;
}
int main()
{
    cout<<count(1122334455667788);
    return 0;
}