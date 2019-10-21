#include<bits/stdc++.h>
using namespace std;
int main()
{
long long i, t,n,c,b;
cin>>t;
while(t--){
    cin>>c>>b>>n;
     long long  a[n+1];
     a[0]=c;
     a[1]=b;
   if(n>=2){
    for(i=2;i<=n;i++){
        a[i]=(a[i-2])^(a[i-1]);
    }

}    cout<<a[n]<<endl;
}

}