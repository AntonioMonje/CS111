/* This program holds the prices of the five items and displays each price, the subtotalof the sale, and the amount of sales tax, and the total
 */
#include <iostream>
using namespace std;

int main()
{
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double subtotal;
    const double TAXRATE = .07;
    double sale_tax;
    double total;
    cout << "Item one price is " << item1 << ", item two price is " << item2 << ", item three price is " << item3 << ", item four price is " << item4 << ", item five price is " << item5 << "." << endl;

    // Calculate the subtotal of the sale.
    subtotal = item1 + item2 + item3 + item4 + item5;
    // display subtotal
    cout << "The subtotal is " << subtotal << "." << endl;
    // Calculate the sales tax.
    sale_tax = subtotal * TAXRATE;
    // Display sale_tax.
    cout << "Sale tax is " << sale_tax << "." << endl;
    // Calculate the total.
    total = subtotal + sale_tax;
    // display total.
    cout << "The total is " << total << "." << endl;
 return 0;
}
