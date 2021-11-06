/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input:
ATTCGGGA

Output:
3
*/
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  char c = s[0];
  int k = 1;
  int m = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == c) k++;
    else {
      m = max(m, k);
      k = 1;
      c = s[i];
    }
  }
  cout << max(m, k) << endl;
}
