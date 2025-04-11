#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int am;
    cin>>a>>b>>c;
    int cost=0;
    for(int i =1;i<=c;i++){
        cost= cost+(i*a);
        }
        if(b>cost){
            cout<<"0";
        }
        else{
        am=(cost)-b;
        cout<<am;}
    return 0;
}