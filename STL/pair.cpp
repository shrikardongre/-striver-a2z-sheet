#include<iostream>
using namespace std;
int main()
{
    pair<int ,int >p={1,3};
    cout<<p.first<<" "<<p.second <<endl;
    pair<int,pair<int,int >>g={1,{1,3}};
    cout<<g.first<<" "<<g.second.first<<" "<<g.second.second<<endl;
    pair<int,int> arr[]={{1,2},{1,3}};
    cout<<arr[1].second;

    

    return 0;
}