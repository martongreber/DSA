#include <iostream>
#include <cassert>

using namespace std;

// Binary search ~> Find first true!

// operate on a monotonic sequence like:
// F F F F F T T T T T 
// ^ is determined by the feasible function
// e.g.: find the element 8 -> feasible fundtion: element >= 8
// 
// firstFeasible    <- -1
// left             <- container start
// right            <- container end
//
// while l <= r {   <- '=' to handle single element case
//      middle = l + (r - l) / 2 
//      if (fesible(container.at(middle))) {
//          firstFeasible = middle
//          l = middle - 1
//      } else {
//          r = middle +1
//      }
// }
// return container.at(firstFeasible)
//

class Solution {
public:
};

int main() {
    Solution sol;
    return 0;
}
