#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i,j;
        i = 0; //pointer for string t
        j = 0; //pointer for string s
        while(i<t.length() && j<s.length())
        {
            if(s[j] == t[i])
            {
                i ++;
            }
            j ++;
        }
        return (t.length()-i);
    }
};

int main(){
    Solution solution;
    string s = "coaching";
    string t = "coding";
    cout << solution.appendCharacters(s, t) << endl;
    return 0;
}
