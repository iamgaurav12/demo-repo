#include <iostream>
#include <limits.h>
using namespace std;

int Minimum(int arr[],int size){
    int minimum=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

int main(){
    int arr[5]={10,90,86,50,1};
    cout<<"Minimum element is : "<<Minimum(arr,5)<<endl;
    return 0;
}