#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for (int i =0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                 min=j;
            }
                    
  }
            int temp = arr[min];
                    arr[min] = arr[i];
                     arr[i] = temp;
        }
         for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    

int main()
{
    int a[]={4,1,3,7,9};
    selection_sort(a,5);
    return 0;
}