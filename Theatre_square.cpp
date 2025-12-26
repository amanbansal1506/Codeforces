#include<iostream>
using namespace std;
int main(){
    long long int n,m,a,b=1;
    cin>>n>>m>>a;
    if(n*m<=a*a){
        cout<<b;
    }

    else if(n%a==0 && m%a==0){
        long long int area= n*m;
        long long int flagstone=a*a;
        long long int required=area/flagstone;
        cout<<required;
    }
    else{
        if(n%a==0){
            n=n+0;
        }
        else{
        long long int div_n=n/a;
        div_n=div_n+1;
        n=a*div_n;
        }

        if(m%a==0){
            m=m+0;
        }
        else{
        long long int div_m=m/a;
        div_m=div_m+1;
        m=a*div_m;
        }
        long long int area= n*m;
        long long int flagstone=a*a;
        long long int required=area/flagstone;
        cout<<required;
    }
    return 0;
}