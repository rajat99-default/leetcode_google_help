#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool is(int x) {
        // Handle negative numbers
        if (x < 0)
            return false;

        int reversedNum = 0;
        int originalX = x;

        while (x > 0) {
            int digit = x % 10;
            reversedNum = reversedNum * 10 + digit;
            x = x/10;
        }

        return originalX == reversedNum;
    }
}obj;


int main()
{
    obj.is(121);
}