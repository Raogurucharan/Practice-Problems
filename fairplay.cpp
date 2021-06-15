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
