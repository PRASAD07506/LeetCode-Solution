class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int> sorted = score;
        
        // Highest score first
        sort(sorted.rbegin(), sorted.rend());
        
        vector<string> answer(score.size());
        
        for(int i = 0; i < score.size(); i++) {
            
            for(int j = 0; j < sorted.size(); j++) {
                
                if(score[i] == sorted[j]) {
                    
                    if(j == 0)
                        answer[i] = "Gold Medal";
                    else if(j == 1)
                        answer[i] = "Silver Medal";
                    else if(j == 2)
                        answer[i] = "Bronze Medal";
                    else
                        answer[i] = to_string(j + 1);
                    
                    break;
                }
            }
        }
        
        return answer;
    }
};