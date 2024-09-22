class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> result;
       // step 1: sorting of array  takes a 0(nlogn):
        sort(nums.begin(),nums.end());

        for(int i =0; i<nums.size();i++){

            if(i>0 && nums[i]==nums[i-1]) continue;

            int left = i+1;   //  step 2: left pointer

            int right = nums.size()-1; //  step 2: right pointer

            while(left<right){

                  int sum = nums[i]+nums[left]+nums[right];

            if(sum==0){
                //if sum is zero ,add the triplet to the result
                result.push_back({nums[i],nums[left],nums[right]});
            
             // move pointer and avoid dupliacte
           while(left<right && nums[left]==nums[left+1]) left++;
           while(left<right && nums[right]==nums[right-1]) right--;
        //    move the pointer one by one 
           left++;
           right--;
    }

         else if(sum<0){

             left++;
           }
           else{
            right--;
        }
     }

 }
    return result;
        
}
};
