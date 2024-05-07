#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key);

int main(){

    int even[6] = {1,3,7,8,10,32};
    int odd[5] = {1,3,6,9,10};
    int  ans = binarySearch(even,6,8);
    return 0;
}

int binarySearch(int arr[], int size, int key){
    int i = 0;
    int j = size-1;

    int mid = (i+j)/2;

    while(i<=j){
        
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            i = mid+1;
        }
        else{
            j = mid-1;
        }

        mid = (i+j)/2;
    }

    return -1;
}