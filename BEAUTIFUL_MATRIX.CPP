#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i= 0;i<5;i++){
        for(int j= 0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int m,n;
    int count=0;
    for(int i= 0;i<5;i++){
        for(int j= 0;j<5;j++){
            if(arr[i][j]==1){
                m=i;
                n=j;
            }
        }
    }
    while(m!=2 || n!=2){
        if(m>2){
            m--;
            count++;}
        if(m<2){
            m++;
            count++;}
        if(n>2){
            n--;
            count++;}
        if(n<2){
            n++;
            count++;}
        }
        cout<<count;
    return 0;
}