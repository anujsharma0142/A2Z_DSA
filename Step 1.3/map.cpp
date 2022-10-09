#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1]="Anuj";
    m[2]="Manit";
    m[13]="202120040";


    /// inserting another way

    m.insert({10, "Sharma"});

    cout<<"before erase --> ";
    for(auto i:m)
    {
        cout<<i.second<<endl;
    }

    cout<<"after erase ---> "<<m.erase(13)<<endl;

    for(auto i:m) 
    {
        cout<<i.second<<endl;
    }
    

    cout<<"Finding 13---> "<<m.count(13)<<endl;

    auto it = m.find(10);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }










    return 0;
}