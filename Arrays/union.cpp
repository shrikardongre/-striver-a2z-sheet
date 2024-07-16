#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void uni (vector <int> &arr1,vector <int> &arr2,int n,int m ){
    vector<int> Union; 
    int i=0;
    int j=0;
    while (i<n&&j<m){
       if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    }
    else{
        if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
}
 while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
//   vector <int> ::iterator it;

  for (auto it=Union.begin();it!=Union.end();it++){
    cout<<*it<<" ";
  }
}
int main()
{
    vector <int> arr1 ={1,2,3,4,5};
    vector <int> arr2 ={4,5,7,9,10};
    int n=arr1.size();
    int m=arr2.size();

    uni (arr1,arr2,n,m);
    return 0;
}