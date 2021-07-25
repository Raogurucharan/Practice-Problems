/*
Explanation
TestCase 1: The energy at first level is 5 units. For the second level energy becomes ⌊53⌋=1 units. 
So the length of foodchain is 2 since from the next level onwards 0 units of energy will be received.

TestCase 3: The energy at different levels is:

Level 1- 10 units
Level 2- ⌊102⌋=5 units
Level 3- ⌊52⌋=2 units
Level 4- ⌊22⌋=1 units
Level 5- ⌊12⌋=0 units
So the answer is 4, since it is the last level to receive non-zero energy.

3
5 3
6 7
10 2

2
1
4
*/

#include <iostream>
using namespace std;

int main() {
    int testcase;
    int a;
    int b;
    cin>>testcase;
    while(testcase--)
    {
        int ans=0;
        cin>>a>>b;
        while(a!=0)
        {
            ans++;
            a=a/b;
        }
        cout<<ans;
    }
}

/*
Explanation
TestCase 1: The energy at first level is 5 units. For the second level energy becomes ⌊53⌋=1 units. 
So the length of foodchain is 2 since from the next level onwards 0 units of energy will be received.

TestCase 3: The energy at different levels is:

Level 1- 10 units
Level 2- ⌊102⌋=5 units
Level 3- ⌊52⌋=2 units
Level 4- ⌊22⌋=1 units
Level 5- ⌊12⌋=0 units
So the answer is 4, since it is the last level to receive non-zero energy.

3
5 3
6 7
10 2

2
1
4


*/