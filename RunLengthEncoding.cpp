#include <iostream>
#include <string>
using namespace std;

string encode(string str)
{
    string encoding = "";
    int count;
 
    for (int i = 0; str[i]; i++)
    {
 
        count = 1;
        while (str[i] == str[i + 1]) {
            count++, i++;
        }
        encoding =encoding + str[i]+ to_string(count) ;
    }
 
    return encoding;
}
 
int main()
{
    string str = "ANBBBBVV4";
 
    cout << encode(str);
 
    return 0;
}