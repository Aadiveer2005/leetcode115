class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           vector<int>ans;
           int product=1;
           int product1=1;
           int j=0;
           for(int i=0;i<nums.size();i++)
           {  product*=nums[i];
              if(nums[i]==0){ j++;
              continue;}
               product1*=nums[i];
           }

               for(int i=0;i<nums.size();i++)
           {   if(j>1)
               ans.push_back(0);
               
               else if(nums[i]==0) 
               ans.push_back(product1);
               else
               ans.push_back(product/nums[i]);
           } 
           return ans;
    }
};