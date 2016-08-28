#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    if(s.length()==0){
        cout<<0;
        return 0;
    }
    int words=1;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            words++;
        }
    }
    cout<<words;
    return 0;
}
