#include <bits/stdc++.h>
using namespace std;

//using array libray
// #include<array>


int main()
{
    //simple array
    // int arr[3]={1,2,3};

    //STL array

    array<int,10> a={1,2,3,4};   //STL array and its static 

    int size =a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    
    //Accessing 2nd index of an array using at operation
    cout<<"Element at 2nd Index---> "<<a.at(2)<<endl;

    //check Empty or not 
    cout<<"Empty or not ---> " <<a.empty()<<endl; //return true or false --- zero means false and 1 means true.

    //check first element 
    cout<<"First Element --->" <<a.front()<<endl;

    //check Last element 
    cout<<"Last Element--->"<<a.back()<<endl;

    cout<<"Size of array-->" <<a.size()<<endl;
    
    
    

    return 0;
}