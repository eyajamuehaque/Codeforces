#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int a,b,c,d;

while(n--){
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
    }
    if(a>b){
       c=a-b;
       d=c/10;
       if(c%10!=0) {
        cout<<d+1<<endl;
       }else{
        cout<<d<<endl;
       }
    }else if(b>a){
        c=b-a;
        d=c/10;
        if(c%10!=0){
            cout<<d+1<<endl;
        }else{
            cout<<d<<endl;
        }
    }
}


return 0;
}
