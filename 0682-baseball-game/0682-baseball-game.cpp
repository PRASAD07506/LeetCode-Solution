class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> Ans;
        int ans=0;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i]=="+")
            {
                int sum=Ans[Ans.size()-1]+Ans[Ans.size()-2];
                Ans.push_back(sum);
            }
            else if(ops[i]=="D")
            {
                int doub=2*Ans[Ans.size()-1];
                Ans.push_back(doub);
            }
            else if(ops[i]=="C")
            {
                Ans.pop_back();
            }
            else
            {
                int insert= stoi(ops[i]);
                Ans.push_back(insert);
            }
        }
        for (int j=0;j<Ans.size(); j++)
        {
            ans+=Ans[j];
        }
        return ans;
    }
};