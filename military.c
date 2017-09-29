#include <iostream>
#include<string>
using namespace std;

void GetInfo(string& name, char& gender, int& age);
bool VerifyEligibility(char gender, int age);
void PrintLetter(bool verify, string name);

int main()
{
  string name;
  int age;
  char gender;
  bool verify;

  GetInfo(name, gender, age);
  verify = VerifyEligibility(gender, age);
  PrintLetter(verify, name); 
 return 0;
}

void GetInfo(string& name, char& gender, int& age) 
{
  cout << "Enter your name";
  cin >> name;
  cout << "Enter M or F for gender";
  cin >> gender;
  cout << "Enter yout age";
  cin >> age;
}

bool VerifyEligibility(char gender, int age)
{
  bool verify;
  if((gender == 'M') && (age >= 18))
    {
      verify = true;
    }
  else 
    verify = false;

  return verify;
}
void PrintLetter(bool verify, string name)
{
 
  if(verify == true)
    cout << "Dear " << name << " Please join the military" << endl;
  else
    cout << "Thank you for applying." << endl;
}
