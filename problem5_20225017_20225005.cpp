/*Write a function that takes an integer and print values from 1 to n in triangle shape recursively.*/

#include <iostream>
using namespace std;
void triangle(int num , int i = 1)
{
   if (i == num)
     {
        for (int E = 1 ; E <= num ;E++ )
        cout << E << " ";
        }
   else 
   {
    for (int j = 1 ; j <= i ; j++ )
        cout << j << " ";
    cout << endl ;
    return triangle(num , i+1);
   }

}

int main()
{
    int N ;
    cout << " Enter a Number \n " ; 
    cin >> N;
   while (N < 1)
   {
   cout << " Invalid !! (Number cant be lass than 1) \n";
   cout << " Enter a Number \n " ; 
    cin >> N;
   }

    triangle (N);
    return 0;
}