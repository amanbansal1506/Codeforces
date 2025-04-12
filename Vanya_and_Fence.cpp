#include<iostream>
using namespace std;
int main()
{
    int m,n,o;
    cin>>m>>n;
    int count=0;
    for(int i=0;i<m;i++){
        cin>>o;
        if(o>n){
            count=count+2;
        }
        else{
            count++;
    }
}
cout<<count;
return 0;
}