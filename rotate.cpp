//reverse first size-k elements,then reverse the last k elements,at last we reverse the whole array.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k%=size;
        if(k==0)
           return;
        swaparr(nums,0,size-k-1);
        swaparr(nums,size-k,size-1);
        swaparr(nums,0,size-1);
    }
    void swaparr(vector<int>& nums, int begin,int end) {
        while(begin<=end)
        {
            swap(nums[begin],nums[end]);
            begin++;
            end--;
        } 
    }
};
