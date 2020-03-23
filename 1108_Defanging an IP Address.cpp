class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i=0;char c =address[i];i++){
            if(c == '.') ans = ans+"[.]";
            else ans = ans+c;
        }
        
        return ans;
            
        
    }
};