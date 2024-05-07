#include<iostream>
using namespace std;

int getSum(int arr[],int n){

   int sum = 0;
   for(int i = 0; i<n; i++){
    sum = sum + arr[i];
   }

   return sum;
}




int main(){

    int size;
    int num[100];
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    for(int i = 0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Sum of elements in the array are: "<<getSum(num,size);
    return 0;
}