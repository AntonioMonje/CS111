#include <iostream>
using namespace std;

void showProgInfo();
void findLargest(int n1, int n2, int n3);



int main()
{
  int n1;
  int n2;
  int n3;
  showProgInfo();
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cout << "The Largest number is: ";
  findLargest(n1, n2, n3);
    return 0;
}
void showProgInfo()
{
  cout << "The program asks you to enter three numbers and output the largest." << endl;
}
void findLargest(int n1, int n2, int n3)
{
  if((n1 > n2) && (n1 > n3))
    {
      cout << n1 << endl;
    }
  else if((n2 > n1) && (n2 > n3))
    {
      cout << n2 << endl;
    }
  else 
    cout << n3 << endl;
}
