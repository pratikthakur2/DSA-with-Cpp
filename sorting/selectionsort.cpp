#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    cout<<"size of array: ";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"/n Enter the array elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"sorted array: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}