#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,s,d,len,ans;
    cin>>n;
    while(n--){
        cin>>s;
        d=s%10;
        len= to_string(s).length();
        ans=(d-1)*10 + (len-1)*len/2 +len;
        cout<<ans<<endl;
    }
    return 0;
}