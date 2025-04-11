#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    int a=arr[m-1];
    for(int i=0;i<n;i++){
        if(a!=0){
            if(arr[i]>=a){
                sum++;
        }
    }
    else if(a==0){
        if(arr[i]!=0){
        if(arr[i]>=a){
            sum++;
    }}
    }
        else {
        sum=0;
    }
}cout<<sum;
return 0;
}
