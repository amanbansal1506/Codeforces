#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[a];
    bool flag=true;
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        if(b[i]==0){
            flag=false;
        }
        else if(b[i]==1){
            flag=true;
            break;
        }
    }
        if(flag){
            cout<<"HARD";
        }
        else{
            cout<<"EASY";
        }
    
return 0;
}