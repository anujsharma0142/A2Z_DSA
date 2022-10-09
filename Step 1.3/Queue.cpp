#include<iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("AnujSharma");
    q.push("MANIT");
    q.push("202120040");

    cout<<"befor pop size of queue "<<q.size()<<endl;

    cout<<"First element  "<<q.front()<<endl;
    q.pop();

    cout<<"First element after pop "<<q.front()<<endl;
    cout<<"Size of queue after pop "<<q.size()<<endl;



    return 0;
}