#include <bits/stdc++.h>
using namespace std;

bool isprime(int  N){
    int num = N;
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    bool ans = isprime(n);
    if(n!=1 && ans == true){
        cout<<"Prime number "<<endl;

    }
    else{
        cout<<"Not a prime number";
    }

    return 0;
}