#include<iostream>
using namespace std;
int main(){
    int n;
    int res= 0;
    cin>>n;
    res = n/5;
    if(n%5!=0){
        res++;
    }
    cout<<res;
}
