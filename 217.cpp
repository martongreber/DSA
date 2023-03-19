#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if (s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> v { 1, 2, 3, 4, 4, 5 };
    Solution sol;
    assert(sol.containsDuplicate(v));
    v = { 1, 2, 3, 4, 5 };
    assert(!sol.containsDuplicate(v));
    
    return 0;
}