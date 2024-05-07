#include<iostream>
using namespace std;


int search(int arr[], int n, int key){

    for(int i =0; i<n; i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}



int main(){

    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int num[100];
    int key;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i =0; i<size; i++){
        cin>>num[i];
    }


    cout<<"Enter the element you want to search: ";
    cin>>key;

    bool found = search(num,size,key);

    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }

    return 0;
}