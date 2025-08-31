// Last updated: 01/09/2025, 01:02:54
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end()); 
        int i = 0;
        int j = tokens.size();
        int cnt = 0;
        while(i != j){  
            if(tokens[i] <= power ){           
                power = power - tokens[i];   
                cnt++;                       
                i++;                          
            }
            else if(tokens[i] > power ){
                j--;                         
                if (i != j && cnt > 0){                      
                    power = power + tokens[j];                  
                    cnt--;                                             
                }                                          
            }
        }
        return cnt ; 
    }
};