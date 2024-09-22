#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>v2={6,7,8,9,10};
    v.erase(v.begin()+1,v.begin()+2);
    v.erase(v.begin()+1,v.end()-2);
    for(int x:v){
        cout<<x<<" ";
    }
}