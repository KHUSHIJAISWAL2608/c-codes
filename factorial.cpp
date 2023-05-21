#include<iostream>
using namespace std;
int main(){
    int i,num,fact=1;
    cout<<"Enter the number to calculate the factorial"<<endl;
    cin>>num;
    if (num<0){
        cout<<"Factorial does not exist"<<endl;
    }
    if(num==0){
        cout<<"Factorial is 0"<<endl;
    } 
    else {
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
cout<<"The factorial of "<<num<<" is "<<fact<<endl;
    }
return 0;

}

