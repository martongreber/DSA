#include <iostream>
#include <unordered_map>
#include <cassert>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> ss, st;
        for(int i=0;i<s.size();i++){
            ss[s[i]]+=1;
            st[t[i]]++;
        }
        if(ss==st){
            return true;
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {

    string s = "rat";
    string t = "tar";
    Solution sol;
    assert(sol.isAnagram(s,t));

    s = "rad";
    t = "tar";
    assert(!sol.isAnagram(s,t));

    return 0;
}