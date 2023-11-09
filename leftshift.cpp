#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin>>n;
     int a[100];
     for (int i=0;i<n;i++)
     {
        cin>>a[i];
         
     }
     int m=a[0];
 for(int i=0;i<n-1;i++)
 {
    a[i]=a[i+1];
 }
 a[n-1]=m;   
 for(int i=0;i<n;i++){
    cout<<a[i];
 }
}
