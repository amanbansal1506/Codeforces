#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    float sum =0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        sum=sum+b;
    }
    cout<<sum/a;
    return 0;
}