/*******************************************************************************************************************************************************
 *Purpose:  This program displays the reverse of a word that you chose.                                                                                *
 *Implemented by: Antonio Monje                                                                                                                     
 *Date: 12/7/2015                                                                                                                                      *
 *User Information: The inputs are the information that the user inputs for what they want.
 *FUNCTIONS: reverseString function is the only that is used.                                                                                          *                                                                                                                                                         
********************************************************************************************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(string s);

int main()
{
  string s;
  cout << "Enter a word ";
  cin >> s;
  s.length();
  reverseString(s);
  cout << endl;
  return 0;
}

void reverseString(string s)
{
  if(s == "")
    return;
  else
    {
      cout << s[s.length() - 1];       
      reverseString(s.substr(0, s.length() - 1));
    }
}
