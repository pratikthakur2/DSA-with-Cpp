#include<iostream>

using namespace std;

int getMax(int num[],int n){
    int maxi = 0;

    for(int i = 0; i<n; i++){

        //lets try the function approach

        maxi = max(maxi,num[i]);


        //below is the usual approach

        // if(num[i]>max){
        //     max = num[i];
        // }
    }

    return maxi;
}

int getMin(int num[],int n){
    int mini = 100;

    for(int i = 0; i<n; i++){

        mini = min(mini,num[i]);


        // if(num[i]<min){
        //     min = num[i];
        // }
    }

    return mini;
}




int main(){

    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;


    int num[100];

    //taking input for array elments
    for(int i =0; i<size; i++){
        cin>>num[i];
    }


    cout<<"Maximum value in the array: "<<getMax(num,size)<<endl;
    cout<<"Minimum value in the array: "<<getMin(num,size)<<endl;
    return 0;
}