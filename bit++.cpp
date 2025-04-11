#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="X++"){
            count++;
        }
        else if(str=="--X"){
            count--;
        }
        else if(str=="X--"){
            count--;
        }
        else if(str=="++X"){
            count++;
            }
        }
    cout<<count<<endl;
        return 0;
}