#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int Roman(string s)
    {
        unordered_map<char, int> k =
    {
                {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    // for (auto i:k)
    // {
    //     // cout << i.first << endl;
    // }
    return 0;
    }

}obj;

int main()
{
    string b;
    cout<<"Enter the number = ";
    cin>>b;
    obj.Roman(b);
}