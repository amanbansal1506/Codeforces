#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str,str1;
    for(int i=0;i<n;i++){
    getline(cin,str);
    str1=str[0];
    int n = str.length();
    for(int i=1;i<n;i++){
        if(str[i]==' '){
            str1+=str[i+1];
}
}cout<<str1<<endl;
    }
    
return 0;
}