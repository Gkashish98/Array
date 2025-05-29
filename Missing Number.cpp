class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
      int n=nums.size();
      int sum=0;
      int actual=(n*(n+1))/2;
      for(int i=0;i<nums.size();i++)
      {
          sum=sum+nums[i];
      }
      return actual-sum;

      

 
  

    }
};
