    #include<iostream>
    #include<vector>  //vector include

    using namespace std;
    
    int main()
    {
        vector<int> v; //creating vector default size is zero.
        //check capacity of v vector.
        cout<<"size---->" <<v.capacity()<<endl;

            //we can initialize if we know already elements
            vector<int> a(5,2); //here the size of vector 5 and all element assign with all 2 bcz we mention with 2 if we don't write 2 then by default it will assign 0,0,0,0,0
            cout<<"print--a> "<<endl;
            for(int i:a){
                cout<<i<<" ";
            }


            //we can alse copy from vector from vector
            vector<int> last(a);

            cout<<"print Last> "<<endl;
            for(int i:last){
                cout<<i<<" ";
            }




        //now we push 1(size) on v
        v.push_back(1);
        cout<<"size--- > "<<v.size()<<endl;
        v.push_back(2);
        cout<<"Capacity-->"<<v.capacity()<<endl;
        cout<<"size--- > "<<v.size()<<endl;

        v.push_back(3);
        cout<<"Capacity-->"<<v.capacity()<<endl;
        cout<<"size--- > "<<v.size()<<endl;

        //check elemment at specific position
        cout<<"Element at 2nd index--->"<<v.at(2)<<endl;

        //check front element
        //check back element

        cout<<"Front element--> "<<v.front()<<endl;

        cout<<"Front element--> "<<v.back()<<endl;

        //we can delete or pop element from vector using pop

        cout<<"before pop"<<endl;
        for(int i:v){
            cout<<i<<" ";

        }
        cout<<endl;

        v.pop_back();

        cout<<"after pop--> "<<endl;
        for(int i:v){
            cout<<i<<" ";
        }
        
        //we can clear all the elements from vector using clear operation and remember vector size(means element) will be zero but capacity(means how many memory assigned) remains same

        cout<<"befor clear size---> "<<v.size()<<endl;

        v.clear();
        cout<<"after clear size-> "<<v.size()<<endl;

        return 0;
    }
