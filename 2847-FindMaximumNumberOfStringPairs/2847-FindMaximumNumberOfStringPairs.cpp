// Last updated: 01/09/2025, 00:58:45
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        long long sum1=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if((words[i]==words[j])|| (words[i]==reve(words[j]))) sum1++;
            }
        }
        return sum1;
    }
    private:
        string reve (string k){
        int n=k.size(),i=0;
        string l;
        while(i<n){
            l.push_back(k[n-i-1]);
            i++;
        }
        return l;
    }
};