#include <iostream>
#include<string>
using namespace std;

// This code contains converting a string to lower case, checking palindrome, reversing a string and getting the length of the string.

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void Reverse(char name[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int GetLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
// Find maximum occuring character in a string

char getMaxOccChar(string s)
{
    int arr[26] = {0};

    // Create an array of count of characters

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // lowercase

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find max occurance character

    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    cout << "Enter your name or any other string : ";
    char name[20];
    cin >> name;

    int Len = GetLength(name);
    cout << "Your name is : " << name << " of length : " << Len;
    cout << endl;

    Reverse(name, Len);

    cout << "The reversed string is : " << name;

    cout << endl;

    cout << "Check Palindrome : " << checkPalindrome(name, Len) << endl;

    string s;

    cout << " Enter a string to find the max occurance : ";
    cin >> s;
    cout << getMaxOccChar(s) << endl;

    return 0;
}