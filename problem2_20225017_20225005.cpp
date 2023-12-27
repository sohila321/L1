/*Write a function that takes 2 arrays (each one of size 5). And print an array sum of each element in 2
arrays.*/

#include <iostream>
using namespace std;
void sumation(int arr1[5], int arr2[5], int sum[5]) // function to sum.
{
  sum[5] = {};
  for (int i = 0; i < 5; i++)
  {
    sum[i] = (arr1[i] + arr2[i]);
    cout << sum[i] << " ";
  }
}
int main()
{
  const int size = 5;
  int array1[size], array2[size], Sum[size] = {};

  cout << " for array1  \n";
  for (int i = 0; i < 5; i++) // take array 1
  {
    cout << " Enter element " << i + 1 << " : ";
    cin >> array1[i];
  }

  cout << " for array2  \n";
  for (int i = 0; i < 5; i++) // take array2
  {
    cout << "  Enter element " << i + 1 << " : ";
    cin >> array2[i];
  }
  cout << endl;

  for (int i = 0; i < 5; i++) // just to print arrays on screen
  {
    cout << array1[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < 5; i++) // just to print arrays on screen
  {
    cout << array2[i] << " ";
  }
  cout << endl
       << "____________" << endl;

  sumation(array1, array2, Sum);

  return 0;
}