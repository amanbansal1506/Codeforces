#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
          int A_count=0;
          int B_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                A_count++;
            }
            else if(s[i]=='B'){
                B_count++;
            }
        }
        if(A_count>B_count){
                cout<<"A\n";
            }
            else{
                cout<<"B\n";
            }
    }
    return 0;
}