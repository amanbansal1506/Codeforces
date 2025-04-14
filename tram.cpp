#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    int init=0;
    int max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
            init=init-a;
            init=init+b;
            if(init>max){
                max=init;
}    
}
cout<<max;
    return 0;
}