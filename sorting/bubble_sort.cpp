#include<iostream>
#include<vector>

using namespace std;


void bubbleSort(vector<int> &nums,int n){
    for(int i =0; i<n-1; i++){
        //for round 1 to round n-1
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            //already sorted
            break;
    }
}

void bubbleSortOptimised(vector<int> &nums, int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}


int main(){

    int n;
    vector<int>nums(n);
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the array elements: \n";
    
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    cout<<"Unsorted array: ";
    for(int j =0; j<n; j++){

        cout<<nums[j]<<" ";

    }
    cout<<endl; 

    // bubbleSort(nums,n);
    bubbleSortOptimised(nums,n);
    cout<<"Sorted array: ";
    for(int k =0; k<n; k++){

        cout<<nums[k]<<" ";

    }
    return 0;
}

// time complexity : O(n2)
// space complexity : O(1)

// for optimized best case : already sorted
// time complexity: O(n)
// space complexity: O(1)