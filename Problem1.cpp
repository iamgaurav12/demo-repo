/* 
1. 10 size array
2. take i/p in that array
3. duoble up each value of that array and print it*/

#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        // cout<<arr[i]*2<<" ";
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}