#include<iostream>
using namespace std;
int main(){
    int arr[100];
int i,j,n,count=0;
cout<<"Enter the element you want to enter"<<endl;
cin>>n;

cout<<"Enter the element you want to enter"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            break;
    }
}


}
cout<<"The number of duplicate elements is "<<count<<endl;
return 0;
}