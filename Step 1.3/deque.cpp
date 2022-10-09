#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d; //creating  deque

    // deque<int> deq(5,3); //creating alse deque
    // cout<<"Check Size---> "<<deq.size()<<endl;

    // for(int i:deq){
    //     cout<<i<<" "<<endl;

    // }

    d.push_front(1); //insert 1 element
    cout<<"Check size---> "<<d.size()<<endl;

    d.push_back(2); //insert from back
    cout<<"check element---> "<<d.at(1)<<endl;

    cout<<"back " <<d.back()<<endl;
    cout<<"front "<<d.front()<<endl;

    cout<<"empty or not "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);  //we can give range for delete
    cout<<"after erase "<<d.size()<<endl;

    return 0;
} 