class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,curr=0,pre=0;
        
        for(int i=0;i<bank.size();i++)
        {
           for(int j=0;j<bank[i].size();j++)
           {
               if(bank[i][j]=='1'){
                   curr++;
               }
           }
            if(curr!=0){
               ans+=pre*curr;
               pre=curr;
              }
               curr=0;
        }
        return ans;
    }
};