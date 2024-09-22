#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(100);
    v.push_back(1000);
    v.push_back(10000);
    v.push_back(100000);
    v.push_back(1000000);
    // v.clear();
    v.resize(2);
    v.resize(6,500);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}