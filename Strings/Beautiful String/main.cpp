#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,temp;
    int n;
    cin>>n;
    cin>>s;
    int count=0;
    for(int i=0;i<n-2;i++){
        temp = s.substr(i,3);
        if(temp=="010"){
            s[i+2]='1';
            count++;
        }
    }
    cout<<count;
    return 0;
}
