#include<iostream>
using namespace std;

int minmax(int arr[],int num){
    int min=arr[0], max=arr[0];
     for(int i=0;i<num;i++){
       if (max < arr[i]){
        max=arr[i];
       }
       if(min>arr[i]){
        min=arr[i];
     }
     }
cout<<
}
int main(){
    int n,i;
    
    char arr[100];
    cout<<"Enter the no. of elements you want to check"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    minmax(arr,num);
return 0;

}