#include<iostream>
#include<vector>
#include<array>
using namespace std;



vector <int> mergeArray(vector<int>& arr1,vector<int>& arr2){

    vector<int>ans;

    //reserve the ans array size to avoid memory waste
    ans.reserve(arr1.size()+ arr2.size());

    int i = 0, j= 0;

    while(i <arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    //add remaining elements from both arrays

    while(i<arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }
    
    while(j<arr2.size()){
        ans.push_back(arr2[j]);
        j++;
    }
    
    
    
    // ******************old logic **********
    // for(int i = 0; i<m; i++){
    //     ans.push_back(arr1[i]);
    // } 

    // for(int i = 0; i<n; i++){
    //     ans.push_back(arr2[i]);
    // }

    sort(ans.begin(),ans.end());

    return ans;

}

int main(){
    vector <int> arr1{1,2,3,4,5};
    vector <int> arr2{6,7,8,9,10};
  
    vector <int> vect;
    vect = mergeArray(arr1,arr2);
    
    for(auto i:vect){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}