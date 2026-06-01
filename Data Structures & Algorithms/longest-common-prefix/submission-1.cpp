class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        string ans = "";
        string first = "";
        string second = "";
        if(size == 1) return strs[0];
        for(int i = 1; i<size; i++){
            if(i ==1) first = strs[i-1];
            else first = ans;
            ans = "";
            second = strs[i];
            int len = min(first.length(), second.length());

            int k = 0;
            int j = 0;
            while(k<len){
                if(first[k] == second[j]){
                    ans.push_back(first[k]);
                    k++;
                    j++;
                }
                else break;
            }
        }
        return ans;
    }
};