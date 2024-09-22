#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>v2={6,7,8,9,10};
    v.insert(v.begin()+3,v2.begin(),v2.end());
    
    //v.insert(v.begin()+2,10);
    for(int x:v){
        cout<<x<<" ";
    }
}