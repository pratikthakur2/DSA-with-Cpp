#include<iostream>
#include<array>
using namespace std;


void printArray(int arr[], int size){
     for(int i=0; i<size;i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    //declare
    int number[15];
    //accessing an array
    cout<<"value at zero index "<<number[0]<<endl;
    
    //accesing at non existent array index
    //cout<<"value at 20 index: "<<number[20]<<endl;
    
    //initiailizing an array
    int second[3] = {2,3,11};
    cout<<"value at 2nd index: "<<second[2]<<endl;



    //initializing only a few elements
    int a1[15] = {1,2,3};
    int n = sizeof(a1)/sizeof(a1[0]);
    printArray(a1,n);
    
    
    cout<<"-------------------------"<<endl;
    
    //initializing all the elements in the array with 0
    //this only works for zero
    int zeros[13] = {0};
    int n2 = sizeof(zeros)/sizeof(zeros[0]);
    printArray(zeros,n2);
    cout<<endl;


 

    

    return 0;



}
