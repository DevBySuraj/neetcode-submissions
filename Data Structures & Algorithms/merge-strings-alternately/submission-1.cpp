class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i =0;
        int j =0;
        int z = min(word1.length(), word2.length());
        string output = "";
        while(i<z || j<z){
            output.push_back(word1[i]);
            i++;

            output.push_back(word2[j]);
            j++;
        }

        while(i<word1.length()){
            output.push_back(word1[i]);
            i++;
        }
        while(j<word2.length()){
            output.push_back(word2[j]);
            j++;
        }
        return output;
    }
};