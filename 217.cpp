#include <cassert>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
   public:
    bool containsDuplicate(const vector<int>& nums) {
        unordered_set<int> s;

        for (auto num : nums) {
            if (!s.insert(num).second) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, const char *argv[]) {
    vector<int> v{1, 2, 3, 4, 4, 5};
    Solution sol;
    assert(sol.containsDuplicate(v));
    v = {1, 2, 3, 4, 5};
    assert(!sol.containsDuplicate(v));
    return 0;
}