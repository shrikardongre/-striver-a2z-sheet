#include<iostream>
#include <vector>
using namespace std;
vector <int> left(vector<int> &arr,int n){
    int temp=arr[0];
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
}


int main()
{
    vector <int> arr={1,2,3,4,5} ;
    int n=arr.size();
    left(arr,n);
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}