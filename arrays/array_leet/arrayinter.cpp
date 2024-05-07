#include<iostream>
#include<vector>
using namespace std;

//approach 1

// vector <int> findArrayIntersection(vector<int>arr1, int n, vector<int>arr2, int m){
//     vector <int>ans;

//     for(int i = 0; i<n; i++){
//         int element = arr1[i];

//         for(int j = 0; j<m; j++){

//             if(element <arr2[j])
//             break;

//             if(element == arr2[j]){
//                 ans.push_back(element);
//                 arr2[j] = -2453533;
//                 break;
//             }
//         }
//     }

//     return ans;
// }


//optimization 2:

vector <int> findArrayIntersectionOp(vector<int>arr1, int n, vector<int>arr2, int m)
{
   int i = 0, j =0;

   vector <int> ans;

   while(i<n && j<m){

    if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }

    else if (arr1[i]<arr2[j]){
        i++;
    }

    else{
        j++;
    }
   }

    return ans;
}





//main function

int main(){

    vector <int> arr1{2,3,4,5};
    vector <int> arr2{1,2,4,5};     
    int n = arr1.size();
    int m = arr2.size();

    vector <int> vect = findArrayIntersectionOp(arr1,n, arr2,m);

    cout<<"Intersection array: ";
    cout<<endl;
 
    for(auto i: vect){
        cout<<i<<" ";
    }

    return 0;
}

