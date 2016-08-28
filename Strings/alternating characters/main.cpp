#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,count=0,i;
    string s;
    cin>>t;
    while(t>0){
        cin>>s;
        while(i<static_cast<int>(s.size()-1)){
            if(i>-1 && s[i]==s[i+1]){
                s.erase(i,1);
                i--;
                count++;
            }else i++;
        }
        cout<<count<<endl;
        count=0;
        i=0;
        t--;
    }
    return 0;
}
