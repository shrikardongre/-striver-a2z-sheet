#include<iostream>
#include<vector>
using namespace std;
void rotate(vector <int> &arr,int  k){
    int n=arr.size();
    k=k%n;
    vector <int> temp(k);
for (int i=n-k;i<n;i++){
    temp[i-(n-k)]= arr[i];
}


for(int i=n-k-1;i>=0;i--){
    arr[i+k]=arr[i];
}
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}


int main()
{
    vector <int> arr ={1,2,3,4,5,6,7};
    rotate(arr,4);
    int n=arr.size();
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}