#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // let suppose we have a vector and we implement binary search on vector
    //Remember all elements will be sorted in binary search otherwise it'll not worked 
    vector<int> v;

    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    sort(v.begin(), v.end());
    cout << "Binary search finding 9 --> " << binary_search(v.begin(), v.end(), 9) << endl;
    cout<<"lower bound---> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"upper bound---> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max --> "<<max(a,b)<<endl;

    string abcd ="abcd";

    reverse(abcd.begin(),abcd.end());
    cout<<"String reverse -- > "<<abcd<<endl;

    //rotate element

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate" <<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"for sort "<<endl;
    sort(v.begin(),v.end());
    
    for(int i:v)
    {
        cout<<i<<" ";
    }



    return 0;
}