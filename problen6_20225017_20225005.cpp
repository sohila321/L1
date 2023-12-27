/*Given a string s, find the length of the longest substring without repeating characters.
Example 1: Input: s = "abcabcbb"*/
#include <iostream>
#include <string>
#include <cctype>   
#include <cstring>
#include <cstdlib>  
using namespace std;

bool absenceOfchar(char c, char subs[100][100], int n)
{
    bool flag = true;
        for (int i = 0; i < strlen(subs[n]); i++)  
        {
            if (subs[n][i] == c)   
            {
                flag = false;
                break;
            }
            
        }
        return flag;
        
    }

    

int main()
{
    char String[100];
    char subString[100][100];
    cin >> String;
    
    int indexOfChar = 0, indexOfsubstring = 0, h = 0;    //h is the starting index in the mainstring for the substring 
    do
    {
        for(int i = h; i < strlen(String); i++)
    {
        
        if(absenceOfchar(String[i], subString, indexOfsubstring))
        {
            subString[indexOfsubstring][indexOfChar] = String[i];
            indexOfChar++;
            
        }
        else
        {
            h++;
            indexOfChar = 0;
            indexOfsubstring++;
            break;
            
        }
    }
    } while (h != strlen(String));

    int longestindex = 0;

    for(int i = 0; i < indexOfsubstring; i++)
    {
        if(strlen(subString[i]) > strlen(subString[longestindex]))
        {
            longestindex = i;
        }
    }
    cout << "the answer is " << subString[longestindex] << " with length :" << strlen(subString[longestindex]);

    return 0;
}