/*Develop an application that helps us to convert between different currencies. We will assume
that the base currency is EGP so this program will help us to convert between EGP and any other
currency and vice versa. The steps of the program is as follow : - First, the program will prompt
user to enter the currency type as follow : - * Euro - $ Dollar - + British Pound - Y yen - R Riyal
- The program will ask the user to enter the selling price and buying price of the corresponding
currency in order.
- The program will ask user about the required action (buy/sell 0 for buy 1 for sell)
- Finally, the program will prompt user to enter the required amount to buy or sell. If the user
wants to buy, then you should display the amount * selling price. And if the user wants to sell, then
you should display the amount * buying price.*/

#include <iostream>
using namespace std;
int main()
{
    bool flage = true ;
    int choise ;
    float sellingp , buyingp ,  amount ;
while (flage == true)
{
    cout << " pleas Enter Currency type as follow :  *  Euru   $  Dollar  +  British Pound   Y  yen  R Riyal   \n";
    cout << "\n Enter selling price : \n";
    cin >> sellingp ;
    cout <<  " Enter buying price : \n";
    cin >> buyingp ;
    cout << " Would you like to sell or buy ( 0 for buy , 1 for sell) \n";
    cin >> choise;
    cout << " Enter the Amount : \n";
    cin >> amount ;
    switch (choise)
    {
    case(0): cout << (amount*buyingp) << endl;
        break;
    case(1): cout << (amount*sellingp) << endl;
        break;
    default: cout << endl;
        break;
    }
}

   return 0; 
}