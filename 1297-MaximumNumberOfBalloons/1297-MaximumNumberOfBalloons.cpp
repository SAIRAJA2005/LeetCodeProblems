// Last updated: 01/09/2025, 01:02:25
class Solution {
public:
    int maxNumberOfBalloons(string t) {
      int n=t.size();
      vector<int>v;
      int a1=0,a2=0,a3=0,a4=0,a5=0;  
      for(int i=0;i<n;i++){
            if(t[i]=='b'){
                a1++;
            }
            else if(t[i]=='a'){
                a2++;
            }
            else if(t[i]=='l'){
                a3++;
            }
            else if(t[i]=='o')
            {
                a4++;
            }
            else if(t[i]=='n'){
                a5++;
            }
        }
        a3=a3/2;
        a4=a4/2;
        for(int i=0;i<1;i++)
        {
            v.push_back(a1);
            v.push_back(a2);
            v.push_back(a3);
            v.push_back(a4);
            v.push_back(a5);
        }
        int s=*min_element(v.begin(),v.end());
        return s;
      
    }
};