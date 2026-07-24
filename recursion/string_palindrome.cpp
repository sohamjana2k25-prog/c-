class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
        for (char &c : s) {
            c = tolower(c);
        }
        int len=s.size();
        char arr[len+1];
        for (int i=0;i<len;i++){
            arr[i]=s[len-1-i];
        }
        arr[len]=='\0';
        for (int j=0;j<len;j++){
            if (arr[j]!=s[j]){
                return false;
            }
        }
        return true;
    }
};
