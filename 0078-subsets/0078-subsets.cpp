class Solution {
public:
    vector<vector<int>>res;
      void solve(vector<int>num,int i,vector<int>&temp){
        if(i>=num.size()){
            res.push_back(temp);
            return;
            

        }
        temp.push_back(num[i]);
        solve(num,i+1,temp);
        temp.pop_back();
        solve(num,i+1,temp);

      }
    vector<vector<int>>subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);

        return res;


        
    }
};