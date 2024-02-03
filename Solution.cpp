class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans, vec;
        for (int& x : nums) {
            while (x > 0) {
                vec.push_back(x % 10);
                x /= 10;
            }
            reverse(vec.begin(), vec.end());
            ans.insert(ans.end(), vec.begin(), vec.end());
            vec.clear();
        }
        return ans;
    }
};
