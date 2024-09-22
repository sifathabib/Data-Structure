#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<int>v(5);
    //vector<int>v(5,100);
    //vector<int>v2(5,100);
    //vector<int>v(v2);
    int a[]={1,2,3,5,6};
    vector<int>v(a,a+5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();

    return 0;
} 