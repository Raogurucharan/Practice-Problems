/*
Four players participate in the playoff tournament. The tournament is held according to the following scheme: the first player will play with the second,
and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.
It is known that in a match between two players, the one whose skill is greater will win. The skill of the i-th player is equal to si and all skill levels are pairwise different
(i. e. there are no two identical values in the array s).
The tournament is called fair if the two players with the highest skills meet in the finals.
Determine whether the given tournament is fair.
Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.
A single line of test case contains four integers s1,s2,s3,s4 (1≤si≤100) — skill of the players. It is guaranteed that all the numbers in the array are different.
Output
For each testcase, output YES if the tournament is fair, or NO otherwise.*/

#include <bits/stdc++.h>
 #include<iostream>
using namespace std;
 
int main() {
  int testcase;
  cin >> testcase;
  while (testcase--) {
    vector<int> s(4);
    for (int& x : s) cin >> x;
    if (min(s[0], s[1]) > max(s[2], s[3]) || max(s[0], s[1]) < min(s[2], s[3]))
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}
