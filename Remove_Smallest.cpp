#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,t;
cin>>n;
for(int i=0;i<n;i++){
    cin>>t;
    vector<int> arr(t);
    for(int j=0;j<t;j++){
        cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        bool ok=true;
        for(int k=0;k<t-1;k++){
            if(arr[k+1]-arr[k]>1){
                cout<<"NO"<<endl;
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
}
return 0;
}
