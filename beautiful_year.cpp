#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(true){
    y++;
    int a,b,c,d;
    a=y/1000;
    b=y/100%10;
    c=y/10%10;
    d=y%10;
    if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){
        break;
    } 
    }
    cout<< y<<endl;
    return 0;
}