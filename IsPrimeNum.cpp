//Time complexity : O(sqrt(n))
//even if we give very large number like 1000000000 we get the result in flash
//However, at times, we might need to find prime numbers in a given range. Let’s say the range is i to j. In this case, we loop from i to j 
//and for each number we check if it is prime or not in O(sqrt(N)). So overall, we will end up with a solution with time complexity O((j-i) * sqrt(N)). 

#include <iostream>
using namespace std;

bool is_prime(int n) {

    if (n == 1) {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

int main() {
    int num;
    cin>>num;
    if(is_prime(num))
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
    return 0;
}