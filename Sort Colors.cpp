class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int countZero=0;
        int countOne=0;
        int counttwo=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                countZero++;
            }
            else if(nums[i]==1)
            {
                countOne++;
            }
            else
            {
                counttwo++;
            }
        }
        for(int i=0;i<countZero;i++)
        {
            nums[i]=0;
        }
         for(int i=countZero;i<countZero+countOne;i++)
        {
            nums[i]=1;
        }
         for(int i=countOne+countZero;i<nums.size();i++)
        {
            nums[i]=2;
        }
    }
};
