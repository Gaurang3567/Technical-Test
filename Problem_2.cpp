#include <bits/stdc++.h>
using namespace std;
 
string isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
 
int main()
{

    // Input: “anna”
    // Output: true

    string S1 = "anna";
    cout << isPalindrome(S1)<< endl;


    // Input: “India”
    // Output: false
    string S2 = "India";
    cout << isPalindrome(S2)<< endl;

    return 0;
}