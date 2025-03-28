#include<iostream>
using namespace std;
int days(int arr[],int capacity,int size){
    int days = 1;
    int sum = 0;
    
    for(int i = 0;i<=size;i++){
       sum+=arr[i];
        if(sum>=capacity){
            days++;
            sum=0;
        }
    }
    return days;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int capacity = 21;
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<days(arr,capacity,size);
}
