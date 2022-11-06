#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        // used to keep track of numbers we have seen before
        unordered_set <int> numbers;

        // iterate through array
        for (int i = 0; i < nums.size(); i++) 
        {

            // we found a duplicate
            if (numbers.find(nums[i]) != numbers.end()) 
            {
                return true;
            }

            // otherwise add number (current element) to HashSet
            numbers.insert(nums[i]);
        }

        // if we iterate through entire array, return false
        return false;
    }
};

int main()
{
    Solution solution;
    vector<int> example_one = { 1, 2, 3, 1 };
    vector<int> example_two = { 1, 2, 3, 4 };

    cout << "Example One : " << solution.containsDuplicate(example_one) << endl;
    cout << "Example Two : " << solution.containsDuplicate(example_two) << endl;

	return 0;
}
