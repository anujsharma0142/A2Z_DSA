#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Anuj");
    s.push("Sharma");
    s.push("Manit");

    cout<<"size of stack \n"<<s.size()<<endl;

    cout<<"check Last element \n"<<s.top()<<endl;

    s.pop();

    cout<<"Check size "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty();

    return 0;
}