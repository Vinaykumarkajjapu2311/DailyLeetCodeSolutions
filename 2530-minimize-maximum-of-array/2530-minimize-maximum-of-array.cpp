class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {

        long long minVal = nums[0];
        long long total = nums[0];
        
        for(int i=1;i<nums.size();i++){
            total += nums[i];
            if(nums[i] > minVal){
                int temp = total/(i+1);
                if(temp >= minVal){
                    if(total%(i+1)){
                        minVal = temp+1;
                    }else{
                        minVal = temp;
                    }
                }
            }
        }
        return minVal;
    }
};