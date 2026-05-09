class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";

        // Keep only letters and numbers
        for (char c : s) {

            if (isalnum(c)) {

                // Convert to lowercase
                temp += tolower(c);
            }
        }

        // Two pointer check
        int left = 0;
        int right = temp.length() - 1;

        while (left < right) {

            if (temp[left] != temp[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};