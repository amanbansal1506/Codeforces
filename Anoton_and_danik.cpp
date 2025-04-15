#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    int A_count=0;
    int D_count=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='A'){
            A_count++;
    }
    else if(ch[i]=='D'){
        D_count++;
        }
}
if(A_count>D_count){
    cout<<"Anton";}
    else if(D_count>A_count){
        cout<<"Danik";}
        else{
            cout<<"Friendship";}
            return 0;
            }
