#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans=0;

    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){

    int size = 5;
    int num[5] = {1,3,3,4,1};
    cout<<findUnique(num,size);

    return 0;
}