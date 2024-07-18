/*
this is the map approach
time complexity o(n^2);
space complexity o(n);
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int> &a,int n,int k){
     n=a.size();
    map<int,int> mpp;
    int presum=0;
    int maxlen=0;

    for (int i=0;i<n;i++){
            presum=presum+a[i];
            if (presum==k){
              maxlen=std::max(maxlen,i+1);
            }
        int rem =0;
        rem=presum-k;
        if (mpp.find(rem)!=mpp.end()){
            int len=i-mpp[rem];
            maxlen=std::max(maxlen,len);
        }
        if (mpp.find(presum)==mpp.end()){
            mpp[presum]=i;
        }
        
    }
       return maxlen;
} 


int main()
{
    vector <int> a{1,3,4,5,6,3,2,6,7,0,5,-1,44};
    int n=a.size();
    cout<<longestsubarray(a,n, 3);
    return 0;
}