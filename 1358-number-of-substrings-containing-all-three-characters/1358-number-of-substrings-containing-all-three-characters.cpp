class Solution {
public:
    int numberOfSubstrings(string s) {

        int i = 0;
        int a = 0, b = 0, c = 0;
        int count = 0;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'a')
                a++;
            if (s[j] == 'b')
                b++;
            if (s[j] == 'c')
                c++;

            while (a > 0 && b > 0 && c > 0) {

                count += s.length() - j; // after getting abc all substring till end will be accpeted

                if (s[i] == 'a')
                    a--;
                if (s[i] == 'b')
                    b--;
                if (s[i] == 'c')
                    c--;
                i++;
            }
        }
            return count;
        
    }
};