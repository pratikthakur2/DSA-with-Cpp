#include<iostream>
#include<vector>


int findDuplicate(vector<int> arr) 
{
    int ans = 0;

    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }


    for(int i = 1; i<arr.size(); i++){
        ans = ans ^i;
    }
    return ans;
}


int main(){


    vector<int> a{1,2,3,4,2};
    cout<<findDuplicate(a);

    return 0;

}