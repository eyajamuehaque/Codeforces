#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

int n;
cin>>n;

int p[n],a;

for(int i=0;i<n;i++){
    cin>>p[i];
}

sort(p,p+n);
int b=0;
for(int i=1;i<n;i++){
     a=p[i]-p[i-1];
    if(a>b){
        b=a;
    }
}

if(b<=1){
        cout<< "YES"<<endl;
    }else {
        cout<< "NO"<<endl;
    }

}


return 0;
}
