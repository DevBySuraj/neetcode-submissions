class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> fors(256,0);
        vector<int> fort(256,0);

        for(auto x : s){
            fors[x]++;
        }
        for(auto x : t){
            fort[x]++;
        }

        for(int i = 0; i<256; i++){
            if(fors[i] != fort[i]) return false;
        }
        return true;
    }
};
