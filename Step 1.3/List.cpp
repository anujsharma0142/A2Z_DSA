    #include<iostream>
    #include<list>

    using namespace std;

    int main()
    {
        list<int> l;

        l.push_back(1);
        l.push_front(2);

        for(int i:l)
        {
            cout<<i<<" "<<endl;
        }
        
        l.erase(l.begin());

        cout<<"after erase "<<endl;
        for (int i:l){
            cout<<i<<" ";
        }

        cout<<"size of list "<<l.size();

        //if we want to copy previous list to new one 
        list<int> n(5,100);
        cout<<"new list "<<n.size();
        for(auto i:n){
            cout<<i<<" ";
        }
        return 0;
    };