#include <iostream>
#include <vector>
using namespace std;
int main(){
class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int j = size(s)-1;
        for(int i = 0;i<(size(s)+1)/2;i++)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
};
return 0;
}
