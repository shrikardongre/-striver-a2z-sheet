#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void frequencyCount(vector<int>& arr,int N, int P)
    { 
        vector <int> hash(N);
        hash.assign(N,0);
        for (int i=0;i<N;i++){
            hash[arr[i]]++;
            
        }
        int i=0;
        while(i<N){
            arr[i]=hash[i+1];
            i++;
        }
        for (int  i = 0; i <N; i++)
        {
            cout<<arr[i]<<endl;
            /* code */
        }
        
        
    }

int main()
{
    vector<int> arr={5,5,5,5,5};
    frequencyCount(arr,5,6);
    return 0;
}