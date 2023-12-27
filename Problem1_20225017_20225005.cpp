/*Write a function that calculates electricity bill given these rules:
Electricity bill is divided into levels of consumption as follows:
- Less than 50 KW, each KW will be calculated with 13 pt.
- Less than 100 KW, each KW is 22 pt.
- Less than 200 KW, each KW is 27 pt.
- Less than 350 KW, each KW is 55 pt.
- Less than 650 KW, each KW is 75 pt.
- Less than 1000 KW, each KW is 125 pt.
- Bigger than that, each KW is 135 pt. */

#include <iostream>
using namespace std;
double bill_calculation(double amount)
{
    double bill = 0;
    if (amount <= 50)
    {
        bill = amount * 0.13;
    }
    else if (amount <= 100)
    {
        bill = 50 * 0.13 + (amount - 50) * 0.22;
    }
    else if (amount <= 200)
    {
        bill = 50 * 0.13 + 50 * 0.22 + (amount - 100) * 0.27;
    }
    else if (amount <= 350)
    {
        bill = 50 * 13 + 50 * 22 + 100 * 27 + (amount - 200) * 0.55;
    }
    else if (amount <= 650)
    {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + (amount - 350) * 0.75;
    }
    else if (amount <= 1000)
    {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + 300 * 0.75 + (amount - 650) * 0.125;
    }
    else
    {
        bill = 50 * 0.13 + 50 * 0.22 + 100 * 0.27 + 150 * 0.55 + 300 * 0.75 + 650 * 0.125 + (amount - 1000) * 0.135;
    }

    return bill;
}
int main()
{
    double consum, bill;
    cout << " Enter amount of consumption :\n";
    cin >> consum;
    bill = bill_calculation(consum);
    cout << "Total is : " << bill << " lE";
    return 0;
}
