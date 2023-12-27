/*Write a function that takes an array (of size 5) as an input and output the arrays reversed.*/

#include <iostream>
using namespace std;
void reverse(int arr[], int arrsize)
{
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 5;
    int array[size] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Num " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "array: " << endl;
    for (int i = 0; i < 5; i++) // just to print arrays on screen
    {
        cout << array[i] << " ";
    }
    cout << endl << "reversed array: ";
    cout << endl;
    reverse(array, size);
    return 0;
}