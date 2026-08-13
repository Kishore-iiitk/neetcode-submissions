class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            while(left < right && !isValid(s[left])){
                left++;
            }
            while(right > left && !isValid(s[right])){
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool isValid (char s){
        return (s >= 'A' && s <= 'Z' ||
                s >= 'a' && s <= 'z' ||
                s >= '0' && s <= '9');
    }
};
