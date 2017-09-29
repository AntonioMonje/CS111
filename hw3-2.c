/* This program holds the prices of the five items and displays each price, the subtotalof the sale, and the amount of sales tax, and the total
 */
#include <iostream>
using namespace std;

int main()
{
    double item1;
    double item2;
    double item3;
    double item4;
    double item5;
    double subtotal;
    const double TAXRATE = .07;
    double sale_tax;
    double total;

    cout << " list item prices." << endl;
    cin >> item1 >> item2 >> item3 >> item4 >> item5;

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
