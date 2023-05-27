#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int num=15;
    int nextterm;
    cout<<a<<","<<b;
    for(int i=0; i<num; i++){
     nextterm=a+b;
     a=b;
     b=nextterm;
     cout<<","<<nextterm;
    }

}