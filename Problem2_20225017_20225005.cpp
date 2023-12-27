/*2- Write a program that takes number of term in the Fibonacci series and display its value. Each
Fibonacci number is the sum of its two predecessors. The first two Fibonacci numbers are 1 and 1.
Thus, the sequence begins with; 1, 1, 2, 3, 5, 8, 13, 21, 34,... and so on.*/

// #include <iostream>
// using namespace std;
// function to calculate fibonacci series by recusion 
//  int fob(int num){
// if (num == 1|| num == 2)
// {     return 1 ;          }
// else {
//      return fob(num-1)+fob(num-2);
// }
// }
// //the main function 
// int main (){
//      int num ;
//      cout << " Enter number of the term : ";
//      cin >> num ;
//      cout << fob(num);
// return 0 ;
// }


//Another way to calculate fibonacci series using swaping

#include <iostream>
using namespace std;
int main() {
    //1, 1, 2, 3, 5, 8,...........
    int size;
    cin >> size;
    int X1 = 1, X2 = 1;
    int X;

    if (size > 2)
    {
        for (int i = 2; i < size; i++)
        {
            X = X1 + X2; // 2 = 1+1 
            X1 = X2; //1
            X2 = X; //2

        }
        cout << X;
    }
    else if (size == 1 || size == 2)
    {
        X = 1;
        cout << X;
    }

    else
        cout << "invalid";
    
    
    return 0;
}
