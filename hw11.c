/*Purpose:  This program makes a menu driveninterface that lets the user chose  what they want to do: fill the array, display the array etc..
Implemented by: Antonio Monje
Date: 12/2/2015
User Information: The inputs are the information that the user inputs for what they want. Also it gets info from a text file to fill the array.
FUNCTIONS: this program contains the main function, change info function, readData function, print array function, find function, sort account function, sort name function, and the compare function. I couldn't get the compare function to work or search by part of a name.
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

struct customer{
  string name;
  string address;
  string state;
  string city;
  string zip;
  string telephone;
  string dateOfLastPayment;
  double accountBalance;
};

void changeInfo(customer ar[], int SIZE);
void readData(customer ar[]);
void printArray(customer ar[], int SIZE);
void find(customer ar[], int SIZE, string part);
void sortAccount(customer ar[], int SIZE);
void sortName(customer ar[], int SIZE);
void compare(customer ar[], int SIZE);

int main()
{
  int SIZE = 10;
  customer ar[SIZE];
  int choice;
  string part;
  readData(ar);
  do
    {
      cout << "1: fill array" << endl;
      cout << "2: Change customer info" << endl;
      cout << "3: Display info" << endl;
      cout << "4: Search for customer" << endl;
      cout << "5: Sort info according to the account balance" << endl;
      cout << "6: Sort info according to the customer names" << endl;
      cout << "7: compare two customer names" << endl;
      cout << "8: Exit program:" << endl;
      cout << "Enter your choice: " << endl;
      cin >> choice;
      switch(choice)
	{
	case 1:cout << "Array was filled" << endl;
	  break;  
	case 2: changeInfo(ar, SIZE);
	  break;
	case 3: printArray(ar, SIZE);
	  break;
	case 4:
	  cout << "Enter part of a name";
	  cin >> part;
	  find(ar, SIZE, part);
	  break;
	case 5: sortAccount(ar, SIZE);  
	  break;
	case 6: sortName(ar, SIZE);
	  break;
	case 7: compare(ar, SIZE);
	  break;
	case 8: cout << "Ending program" << endl;
	  break;
	default: cout << "Invalid choice" << endl;
	}
    }while(choice != 8);
  
return 0;
}

void readData(customer ar[])
{
  int i = 0;
  ifstream inFile;
  if(!inFile)
    {  
      cout << "No file found!" << endl;
    }
  inFile.open("customers.txt");
  
  inFile >> ar[i].name >> ar[i].address >> ar[i].state >> ar[i].city >> ar[i].zip >> ar[i].telephone >> ar[i].dateOfLastPayment >> ar[i].accountBalance;
  while(inFile)
    {
      i++;
      inFile >> ar[i].name >> ar[i].address >> ar[i].state >> ar[i].city >> ar[i].zip >> ar[i].telephone >> ar[i].dateOfLastPayment >> ar[i].accountBalance;
    }  
  inFile.close();
}

void changeInfo(customer ar[], int SIZE)
{
  string key;
  cout << "Enter a name: ";
  cin >> key;
  bool found = false;
  for(int i = 0; i < SIZE; i++)
    {
      if(ar[i].name == key)
	{
	found = true;
	}
      if(!found)
	{
	  cout << "not found" << endl;
	}
 else
   {
	  cout << "Enter name: ";
	  cin >> ar[i].name;
	  cout << "Enter address: ";
          cin >> ar[i].address;
	  cout << "Enter state: ";
          cin >> ar[i].state;
	  cout << "Enter city: ";
          cin >> ar[i].city;
	  cout << "Enter zip: ";
          cin >> ar[i].zip;
	  cout << "Enter telephone: ";
          cin >> ar[i].telephone;
	  cout << "Enter date of last purchase: ";
          cin >> ar[i].dateOfLastPayment;
	  cout << "Enter account balance: ";
          cin >> ar[i].accountBalance;
   }
      cout << left << setw(20) << ar[i].name << setw(20) << ar[i].address << setw(20) << ar[i].state << setw(20) << ar[i].city << setw(20) << ar[i].zip << setw(20) << ar[i].telephone << setw(20) << ar[i].dateOfLastPayment << setw(20) << ar[i].accountBalance << endl;    
    }
}

void find(customer ar[], int SIZE, string part)
{
  int i; 
  ar[i].name.length() - 1;
  int n;
  bool found = false;
  for(i = 0; i < SIZE; i++)
    {
      if(ar[i].name.find(part) >= 0 && ar[i].name.find(part) < ar[i].name.length())
	{
	  cout << left << setw(20) << ar[i].name << setw(20) << ar[i].address << setw(20) << ar[i].state << setw(20) << ar[i].city << setw(20) << ar[i].zip << setw(20) << ar[i].telephone << setw(20) << ar[i].dateOfLastPayment << setw(20) << \
	    ar[i].accountBalance << endl;
	  found = true;
	}	 
    }
  if(!found)
    cout << part << "Is not found in: " << endl;
} 

void printArray(customer ar[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      cout << left << setw(20) << ar[i].name << setw(20) << ar[i].address << setw(20) << ar[i].state << setw(20) << ar[i].city << setw(20) << ar[i].zip << setw(20) << ar[i].telephone << setw(20) << ar[i].dateOfLastPayment << setw(20) << ar[i].accountBalance << endl;
    }
}

void sortAccount(customer ar[], int SIZE)
{
  int startScan, minIndex;
  double minValue;
  ofstream outFile;
  outFile.open("balance.txt");
  for(startScan = 0; startScan < (SIZE - 1); startScan++)
    {
      minIndex = startScan;
      minValue = ar[startScan].accountBalance;
      for(int i = startScan + 1; i < SIZE; i++)
        {
          if(ar[i].accountBalance > minValue)
            {
              minValue = ar[i].accountBalance;
              minIndex = i;
            }
        }
      ar[minIndex].accountBalance = ar[startScan].accountBalance;
      ar[startScan].accountBalance = minValue;
    }
  for(int i = 0; i < SIZE; i++)
    {
      outFile << left << setw(20) << ar[i].name << setw(20) << ar[i].address << setw(20) << ar[i].state << setw(20) << ar[i].city << setw(20) << ar[i].zip << setw(20) << ar[i].telephone << setw(20) << ar[i].dateOfLastPayment << setw(20) <<\
	ar[i].accountBalance << endl;

    }
  outFile.close();
  cout << endl;
}

void sortName(customer ar[], int SIZE)
{
  int startScan, minIndex;
  string minValue;
  ofstream outFile;
  outFile.open("names.txt");
  for(startScan = 0; startScan < (SIZE - 1); startScan++)
    {
      minIndex = startScan;
      minValue == ar[startScan].name;
      for(int index = startScan + 1; index < SIZE; index++)
	{
          if(ar[index].name < minValue)
            {
              minValue = ar[index].name;
              minIndex = index;
            }
	}
    
      ar[minIndex].name = ar[startScan].name;
      ar[startScan].name = minValue;    
}
  for(int i = 0; i < SIZE; i++)
    {
      outFile << left << setw(20) << ar[i].name << setw(20) << ar[i].address << setw(20) << ar[i].state << setw(20) << ar[i].city << setw(20) << ar[i].zip << setw(20) << ar[i].telephone << setw(20) << ar[i].dateOfLastPayment << setw(20) \
 <<\
        ar[i].accountBalance << endl;
    }
  outFile.close();
  cout << endl;
}
void compare(customer ar[], int SIZE)
{
  string name1;
  string name2;

  cout << "Enter Name of the first person: ";
  cin >> name1; 
  cout << endl;  
  cout << "Enter Name of the first person: ";
  cin >> name1;
  if(name1 > name2)
    {
      ar[name1].address = ar[name2].address;
    }
  char name1[30];
  char name2[30];
  0 = strcmp(name1, name2);
  if(strcmp(name1, name2) > 0)
    {
      ar[name1].lenth() = ar[name2].length();
    }
}
