#include<iostream>
using namespace std;
int main(){
    int n,nextnum;
    cout<<"Enter the vlue of n upto which you want fibbonacci"<<endl;
    cin>>n;

    int  a=0,b=1;
    cout<<a<<","<<b;
    for(int i=0;i<n;i++){
        nextnum=a+b;
        a=b;
        b=nextnum;
        cout<<","<<nextnum;
    }
}
