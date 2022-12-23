#include<bits/stdc++.h>
using namespace std;
void file_i_o(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}
//##################################################

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<vector<int>>ans;
        sort(begin(nums), end(nums));
        int i = 0, j = nums.size()-1;
        while(i < j) {
            if(nums[i] + nums[j] == target) {
                ans.push_back({i,j});
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else j--;
        }
        for(auto it:ans){
            cout<<it[0]<<" "<<it[1]<<endl;
        }
        return {};
    }
};


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	file_i_o();
	// START //
    Solution s;
    s.twoSum({2, 7, 11, 15}, 9);
    return 0;
}