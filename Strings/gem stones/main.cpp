#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    int rocks;
    cin>>rocks;
    char letter[26] = {0};
    int count = 0;
    string s;
    for (int r = 0; r < rocks; r++) {
        cin>>s;
        for (int i = 0; i < s.length(); i++) {
            if (letter[s[i] - 'a'] == r) {
                letter[s[i] - 'a']++;
                if (letter[s[i] - 'a'] == rocks) {
                    count++;
                }                    
            }
        }
    }

    cout<<count;

    return 0;
}
