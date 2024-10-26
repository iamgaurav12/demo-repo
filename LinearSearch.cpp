#include <iostream>
using namespace std;

int main(){
    int arr[6]={2,4,6,8,10,12};
    int k;
    cout<<"Enter key : ";
    cin>>k;
    bool flag = 0;
    // 0 -> not found
    // 1 -> found
    for(int i=0;i<6;i++){
        if(k==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Key Founded";
    }
    else{
        cout<<"Not founded";
    }
    return 0;
}