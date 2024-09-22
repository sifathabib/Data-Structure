#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>v2={6,7,9,8,9,9,10};
    replace(v.begin(),v.end(),2,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto it=find(v2.begin(),v2.end(),15);
    if(it==v2.end()) cout<<"Not Found";
    else cout<<"Found";
}