#include <bits/stdc++.h>
using namespace std;

string solve(vector<string> &words){
    int max_a = 0;
    string res = "-1";
    for(auto word : words){
        int count = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i]=='a')
            count++;
        }
        if(count>max_a)
        {
            max_a = count;
            res = word;
        }
    }
    return res;
}


int main(){
    vector<string> words{
        "abcd",
        "aaabcd",
        "aaaaaabc"
    };
    cout<<solve(words);
    return 0;
}