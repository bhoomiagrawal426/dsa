class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int arr[2000];
        int index=0;
        for(int i=0; i<n; i++){
            arr[index]=nums[i];
            index++;
            arr[index]=nums[i+n];
            index++;
        }
 
        vector<int> ans(arr, arr+2*n);
        return ans;
    }
};