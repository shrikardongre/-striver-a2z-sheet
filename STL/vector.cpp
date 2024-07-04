#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;;
    }
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,2);
        for(int i=0;i<vec.size();i++){
        cout<<vec[i].first<<endl;
    }
    
    vector <int> gg  (5,100) ;
    cout<<gg[2]<<endl ;
    /////////////////////
    // copy of gg
     vector<int> lol(gg);
     cout<<lol[2]<<endl;
    //////////////////////////////////
     v.push_back(3); 
     v.push_back(4);
     v.push_back(5);
      
      
    vector<int>:: iterator it=v.begin();
    cout<<*(it)<<endl;


    return 0;
}
