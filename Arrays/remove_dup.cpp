#include<iostream>
#include<vector>
using namespace std;
int duplicates( vector <int> &arr ){
    int n=arr.size();
    int j=0;
    for (int i=1;i<n;i++){
           if (arr[i]!=arr[j]){
                j++;
                arr[j]=arr[i];    
                     }
    }
    return j+1;
}
int main()
{
    vector <int> arr={1,1,1,2,2,3,3,4,4,5,5} ;
    int k=duplicates(arr);
    cout<<"the number of unique elements in the given array are "<< k <<endl;
    for (int i=0;i<k;i++){
        cout<<arr[i];
    }

    return 0;
}