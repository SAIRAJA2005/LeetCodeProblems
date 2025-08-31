// Last updated: 01/09/2025, 01:02:33
class Solution {
public:
    string defangIPaddr(string address) {
        string ne="";
        for(int i=0;i<address.size();i++)
        {
            if (address[i]=='.')
            {
                //s[i] = '[.]';
                ne+='[';
                ne+='.';
                ne+=']';
            }
            else
            {
                ne+=address[i];
            }
        }
        return ne;
    }
};