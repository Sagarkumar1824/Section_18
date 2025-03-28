#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,8,10,12};
    int target = 7;
    int size  = sizeof(arr)/sizeof(arr[0]);
    for(int i  = 0;i<size;i++){
        if(arr[i]==target){
            cout<<i<<endl;
            break;
        }
        else if(arr[i]>target){
            cout<<"Target found at index : "<<i-1;
            break;
        }
    }
}

