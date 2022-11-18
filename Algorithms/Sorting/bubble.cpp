#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //counter for unsorted value 
    int count = 1;
    while(count<n){
        for(int i=0; i<n-count; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]= arr[i+1]; //swapping if current element greeater then next element
                arr[i+1]=temp;
            }
        }
        count ++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}