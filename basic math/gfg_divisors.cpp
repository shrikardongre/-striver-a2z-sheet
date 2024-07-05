#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 long long sumOfDivisors(int n)
    { 
        int sq=sqrt(n);
        long long sum =0;
        for (int i =1;i<=sq;i++){
            if (n%i==0){
                sum+=i;
                if (n/i !=i){
                    sum=sum+(n/i);
                    
                }
            }
            
        }
        return sum ;
        // Write Your Code here
    }
    long long total_sum(int n){
            vector<long long> divisors;
        for (int i = 1; i <= n; i++) {
            divisors.push_back(sumOfDivisors(i));
        }
        return accumulate(divisors.begin(), divisors.end(), 0LL);
    }
int main()
{
    cout<<total_sum(4);
    return 0;
}