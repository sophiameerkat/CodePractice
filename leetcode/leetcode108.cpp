# Convert Sorted Array to Binary Search Tree
class Solution {
public:
    TreeNode* construct(vector<int>& nums, int l, int r) {
        if (l > r)
            return NULL;
        int m = l + (r - l) / 2;
        TreeNode* root = new TreeNode(nums[m]);
        root -> left = construct(nums, l, m - 1);
        root -> right = construct(nums, m + 1, r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* ans = construct(nums, 0, nums.size() - 1);
        return ans;
    }
};
