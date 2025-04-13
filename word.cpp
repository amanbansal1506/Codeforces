#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string str;
int countsmall=0;
int countcapital=0;
cin>>str;
for(int i =0; i<str.length();i++){
    if(islower(str[i])){
        countsmall++;
        }
        else if(isupper(str[i])){
            countcapital++;
            }
        }
 string lower = str;
 string upper = str;

 for(int i =0;i<upper.length();i++){
    upper[i] = tolower(upper[i]);
 }
 for(int i =0;i<lower.length();i++){
    lower[i] = toupper(lower[i]);
    }

    if(countcapital>countsmall){
        cout<< lower<<endl;   
    }
    else if(countsmall>countcapital || countsmall==countcapital){
        cout<<upper<<endl;
}
return 0;
}

