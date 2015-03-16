#include <map>
#include <vector>

using std::vector;
using std::map;

class Solution {
    public:
        int majorityElement(vector<int> &num) {
            int halfSize = num.size() / 2;
            map<int, int> votesMap;

            for(vector<int>::iterator it = num.begin(); it != num.end(); ++it) {
                if( (++votesMap[*it]) > halfSize) {
                    return *it;
                }
            } 
            
            return -1;
        }
};

