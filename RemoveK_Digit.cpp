
/*
402. Remove K Digits leetcode
``````````````````````````````
Given string num representing a non-negative integer num, and an integer k, return the smallest possible
integer after removing k digits from num.

Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

*/

#include<iostream>
using namespace std;

    string removeKdigits(string num, int k) {
        string ans="";
        for(char &c:num)
        {
            while(ans.size() && ans.back()>c &&k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size()||c!='0')
            ans.push_back(c);
        }
        while(ans.size()&&k--)          
        {
            ans.pop_back();
        }
        return (ans=="")?"0":ans;
    }

    int main()
    {
        string num;
        cin>>num;
        int k;
        cin>>k;
        cout<<removeKdigits(num,k);

    }
