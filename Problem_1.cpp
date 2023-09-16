#include <iostream>
#include <string>
using namespace std;


 
int count(string s, char c)
{
    int occur = 0;
 
    for (int i=0;i<s.length();i++)
 
        if (s[i] == c)
            occur++;
 
    return occur;
}
 
int main()
{
    //  Count character 'e' in the below string.
    // 	Input "geeksforgeeks". 
    // 	Output: 4

    string str1= "geeksforgeeks";
    char c1 = 'e';
    cout << count(str1, c1) << endl;

    // Count character 'a' in the below string.
    // Input "abccdefgaa."
    // Output : 3

    string str2= "abccdefgaa";
    char c2 = 'a';
    cout << count(str2, c2) << endl;

     
}