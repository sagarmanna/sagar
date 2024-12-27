#include<iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int>arr){
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans= ans^arr[i];
    }
    return ans;
}
int main(){


    int n ;
     cout<<"Enter the size of array: ";
     cin>>n;

     vector<int>arr(n);
     cout<<"Enter the the element: "<<endl;
     for(int i =0;i<arr.size();i++){
        cin>>arr[i];

     }
     int unique= uniqueElement(arr);
     cout<<"Unique Element is :" <<unique<<endl;
     return 0;
}
