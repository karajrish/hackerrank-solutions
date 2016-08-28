#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    std::getline (std::cin,s);
    if(s.length()<0){
        cout<<"not pangram";
        return 0;
    }
    vector<int>map(26,0);
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            map[int(tolower(s[i]))-97]++;
        }
    }
    for(int i=0;i<26;i++){
       if(map[i]==0){
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram"<<endl;
    
    return 0;
}
