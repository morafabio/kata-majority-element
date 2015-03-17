#include <map>
#include <vector>

using std::vector;
using std::map;

class Solution {
    public:
        int majorityElement(vector<int> &num) {
            // initially the candidate is unknown and with 0 votes
            int votes = 0;
            int candidate = -1;

            for(vector<int>::iterator it = num.begin(); it != num.end(); ++it) 
            {
                // not votes, yet? set the new candidate and assign 1 vote
                if(votes == 0) {
                    candidate = *it;
                    votes++;
                } else {
                    // increment votes if the current candidate is matching
                    if(candidate == *it) {
                        votes++;
                    // decrement votest if the current candidate is different
                    } else {
                        votes--;
                    }
                }
            }

            return candidate; 
        }
};

