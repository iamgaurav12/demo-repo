#include <iostream>
using namespace std;

void count(int arr[],int n){
    int zeroCount= 0;
    int oneCount= 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            oneCount++;
        }
    }

    // Step B : Place all zeros
    // int i;
    // for(i=0;i<zeroCount;i++){
    //     arr[i]=0;
    // }

    // // Step B : Place all ones
    // for(int j=i;j<n;j++){
    //     arr[j]=1;
    // }

    // EASY WAY
    int idx=0;
    while(zeroCount--){
        arr[idx]=0;
        idx++;
    }
    while(oneCount--){
        arr[idx]=1;
        idx++;
    }
}

//Method-2  -->Debug krke dekh lo smjh meh aa jayega

void count2(int arr[], int n) {
    int left = 0;       // Initialize the left pointer
    int right = n - 1;  // Initialize the right pointer

    while (left < right) {
        // Move the left pointer to the right until a 1 is encountered
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Move the right pointer to the left until a 0 is encountered
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap the elements at left and right pointers
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}



int main(){
    int arr[]={0,1,0,1,1,0,1,0,0,0,1,0,1};
    int n = 13;
    // count(arr,n);
    count(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}