class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";

        int len1 = word1.length();
        int len2 = word2.length();
        int min_len = min(len1, len2);
        int i = 0;
        int j =0;
        while(i<min_len || j<min_len){
            merged.push_back(word1[i]);
            i++;
            merged.push_back(word2[j]);
            j++;
        }

        while(i<len1){
            merged.push_back(word1[i]);
            i++;
        }
        while(j<len2){
            merged.push_back(word2[j]);
            j++;
        }
        return merged;
    }
};