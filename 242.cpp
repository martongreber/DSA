#include <iostream>
#include <unordered_map>
#include <cassert>

using namespace std;

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        if (s.size()!=t.size()) {
            return false;
        }
        unordered_map<char,int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        for (char c : t) {
            if (--charCount[c] == 0) {
                charCount.erase(c);
            }
        }
        return charCount.empty();
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