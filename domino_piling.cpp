#include<iostream>
using namespace std;
int main(){
    int m,n,a;
    cin>>m>>n;
    if(m>=1 && n>=1 && m<=16 && n<=16){
        a= m*n;
        if(a%2==0){
            cout<<a/2;
        }
        else{
            a=a-1;
            cout<<a/2;
        }
    }
    return 0;
}