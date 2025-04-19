#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    int count=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(b>a && ((b-a)>=2)){
            count++;
        }
    }
    cout<<count;
    return 0;
}