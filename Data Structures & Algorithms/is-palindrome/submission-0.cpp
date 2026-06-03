#include<algorithm>
class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.length();

        int i = 0;
        int j = size -1;

        while(i<=j){
            while(i<size && !isalnum(s[i])){
                i++;
            }
            while(j>= 0 && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i]) == tolower(s[j])) {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};
