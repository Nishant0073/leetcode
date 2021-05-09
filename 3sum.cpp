// *************************** Brutforce approch ******************************

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
        int n = nums.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        for(int k=j+1;k<n;k++)
                        {
                                if(nums[i]+nums[j]+nums[k]==0)
                                {
                                        vector<int>a;
                                        a.push_back(nums[i]);
                                        a.push_back(nums[j]);
                                        a.push_back(nums[k]);
                                    sort(a.begin(),a.end());
                                    if(find(v.begin(),v.end(),a)==v.end())
                                    {
                                        v.push_back(a);
                                    }
                                }
                        }
                }
        }

        return v;
    }
};

//*******************************************************************************
