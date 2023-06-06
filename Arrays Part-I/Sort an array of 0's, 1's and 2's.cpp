//1st
class Solution {
public:
    void sortColors(vector<int>& nums) {
      // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i)
        {
            for(int j=0;j<nums.size()-i-1;++j)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};

2nd
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int first=0;
        int mid=0;
        int last=nums.size()-1;
        
        while(mid<=last)
        {
            switch(nums[mid])
            {
                case 0:swap(nums[first++],nums[mid++]);
                    break;
                    
                case 1:mid++;
                    break;
                    
                case 2:swap(nums[mid],nums[last--]);
                    break;
            }
        }
    }
};