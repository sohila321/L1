#include <iostream>
using namespace std;

int summation = 0;

int summ(int lowerBound, int upperBound)
{
    
    summation += lowerBound;
    if (lowerBound == upperBound)
    {
        return summation;
    }
    else
    {
      return  summ(lowerBound + 1, upperBound);
    }
}

int main()
{
    int start, end;
    cout << "Enter starting Number : \n";
    cin >> start;
    cout << "Enter ending Number : \n";
    cin >> end;
    while (start > end)
    {
        cout << " Starting number must be less than ending number \n";
        cout << "Enter starting Number : \n";
        cin >> start;
        cout << "Enter ending Number : \n";
        cin >> end;
    }
    if (start == end)
    {
        cout << "sumation from " << start << " to "<< end << " is ";
        cout << start *2 ;
    }
    else
    {
        cout << "sumation from " << start << " to "<< end << " is "<< summ(start, end);
    }

    
    return 0;
}