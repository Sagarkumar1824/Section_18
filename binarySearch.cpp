#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,3,5,8,10,12};
    int st = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int end = size-1;
    int target  =  7;
    while(st<=end){
       int mid = st+ (end-st)/2;
       if(arr[mid] == target){
        cout<<mid<<endl;
        
       }
       else if(arr[mid]>target){
        end = mid-1;


       }
       else{
        st = mid+1;
       }
       
    }
    cout<<end;
}