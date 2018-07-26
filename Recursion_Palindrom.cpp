#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(const char * const s, int low, int high)
{
     if (high <= low) // Base case
        return true;
     else if (s[low] != s[high]) // Base case
        return false;
     else
        return isPalindrome(s, low + 1, high - 1);
}
bool isPalindrome(const char * const s)
{
    return isPalindrome(s, 0, strlen(s) - 1);
}
int main()
{
    string a[100];
    cout<<"Enter the string: ";
    //cin>>a[];

}
