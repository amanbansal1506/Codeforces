#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
    cin>>ch[i];}
    int count=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='B' || ch[i]=='G' || ch[i]=='R'){
            if(ch[i]==ch[i+1]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}