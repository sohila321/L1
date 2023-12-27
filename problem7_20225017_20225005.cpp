/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is
valid. An input string is valid if: Open brackets must be closed by the same type of brackets. Open
brackets must be closed in the correct order. Every close bracket has a corresponding open bracket of
the same type.*/

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

bool check(char c, char string[100], int j)
{
        int invalid;
        int open1 = 0, open2 = 0, open3 = 0, close1 = 0, close2 = 0, close3 = 0;
        bool flag = false;
        for (int n = j + 1; n < strlen(string); n++)
        {
                if (string[n] == c)
                        flag = true;
        }
        if (flag == true)
        {
                for (int i = 0; i < strlen(string); i++)
                {
                        if (string[i] == '(')
                                open1++;
                        else if (string[i] == ')')
                                close1++;
                        else if (string[i] == '{')
                                open2++;
                        else if (string[i] == '}')
                                close2++;
                        else if (string[i] == '[')
                                open3++;
                        else if (string[i] == ']')
                                close3++;
                        else
                                invalid += 1;
                }
                if (open1 == close1 && open2 == close2 && open3 == close3 && invalid == 0)
                        flag = true;
                else
                        flag = false;
        }
        return flag;
}

int main()
{
        char str[100];
        bool valid;
        cout << " Enter string contain onle brackets \n";
        cin >> str;

        for (int i = 0; i < strlen(str); i++)
        {

                if (str[i] == '(')
                {
                        valid = check(')', str, i);
                }
                else if (str[i] == '{')
                {
                        valid = check('}', str, i);
                }
                else if (str[i] == '[')
                {
                        valid = check(']', str, i);
                }
        }
        if (valid)
                cout << " TRUE  ";
        else
                cout << " FALSE ";
        return 0;
}