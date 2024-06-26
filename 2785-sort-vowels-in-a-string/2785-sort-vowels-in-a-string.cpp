class Solution {
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
public:
    string sortVowels(string s) {
        vector<char> vowels;
        for(char ch: s) {
            if(isVowel(tolower(ch))) vowels.push_back(ch);
        }
        sort(vowels.begin(), vowels.end());
        int k = 0;
        for(int i = 0; i < s.length(); i++) {
            if(isVowel(tolower(s[i]))) {
                s[i] = vowels[k++];
            }
        }
        return s;
    }
};