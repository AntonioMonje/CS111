#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

struct customer
{
  string name;
  string address;
  string city;
  string state;
  string  zip;
  string telephone_Number;
  string lastPaymentDate;
  double accountBalance;
};

void readData(customer[],int);
void updateCustomer(customer[],string,int);
void display(customer[],int);
void searchCustomer(customer[],string,int);
void sortByBalance(customer[],int);
void sortByName(customer[],int);
int compareCustomer(customer[],string,string,int);

int main()
{
  // Constant for the number of accounts
  const int NUM_ACCOUNTS = 10;

  // Array of Customer structures
  customer Customers[NUM_ACCOUNTS];
  string name,firstName,secondName;
  while(1)
    {
      cout<<"Press 1 to read customer data."<<endl
          <<"Press 2 to edit customer info."<<endl
          <<"Press 3 to display all customers."<<endl
          <<"Press 4 to search customers"<<endl
          <<"Press 5 to sort according to balance "<<endl
          <<"Press 6 to sort according to name"<<endl
          <<"Press 7 to compare to customer"<<endl
          <<"press 8 to exit."<<endl;
      int choice;
      cin>>choice;
      switch(choice)
        {
        case 1:
	  readData(Customers,NUM_ACCOUNTS);
	  break;
        case 2:
	  cout<<"Enter name of customer : ";
	  cin>>name;
	  updateCustomer(Customers,name,NUM_ACCOUNTS);
	  break;
        case 3:
	  display(Customers,NUM_ACCOUNTS);
	  break;
        case 4:
	  cout<<"Enter name of customer : ";
	  cin>>name;
	  searchCustomer(Customers,name,NUM_ACCOUNTS);
	  break;
        case 5:
	  sortByBalance(Customers,NUM_ACCOUNTS);
	  break;
        case 6:
	  sortByName(Customers,NUM_ACCOUNTS);
	  break;
        case 7:
	  cout<<"Enter name of both customer : "<<endl;
	  cin>>firstName;
	  cin>>secondName;
	  compareCustomer(Customers,firstName,secondName,NUM_ACCOUNTS);
	  break;
        case 8:
	  exit(1);
	  break;
        }
    }
  return 0;
}

void readData(customer arr[],int size)
{
  ifstream input;
  input.open("customer.txt");
  int i=0;
  while(input && i<size)
    {
        input>>arr[i].name>>arr[i].address>>arr[i].city>>arr[i].state>>arr[i].zip
             >>arr[i].telephone_Number>>arr[i].lastPaymentDate>>arr[i].accountBalance;
	i++;
    }
}

void updateCustomer(customer arr[],string name,int size)
{
  int i;
  for(i=0;i<size;i++)
    {
      if(arr[i].name.compare(name)==0)
	break;
    }
  if(i!=size)
    {
      cout<<"Enter updates : "<<endl;
      cout<<"Address : ";
      cin>>arr[i].address;
      cout<<"City    : ";
      cin>>arr[i].city;
      cout<<"State   : ";
      cin>>arr[i].state;
      cout<<"Zip     : ";
      cin>>arr[i].zip;
      cout<<"Telephone: ";
      cin>>arr[i].telephone_Number;
      cout<<"Last payment date : ";
      cin>>arr[i].lastPaymentDate;
      cout<<"Account Balance : ";
      cin>>arr[i].accountBalance;
    }
  else
    {
      cout<<"No customer exist by this name"<<endl;
    }
}

void display(customer arr[],int size)
{
  cout<<"*************************Customer info***********************"<<endl;
  for(int i=0;i<size;i++)
    {
        cout<<"Name    : "<<arr[i].name<<endl
            <<"Address : "<<arr[i].address<<endl
            <<"City    : "<<arr[i].city<<endl
            <<"State   : "<<arr[i].state<<endl
            <<"Zip     : "<<arr[i].zip<<endl
            <<"Telephone: "<<arr[i].telephone_Number<<endl
            <<"Last payment date : "<<arr[i].lastPaymentDate<<endl
            <<"Account Balance : "<<arr[i].accountBalance<<endl<<endl;
    }
}

void searchCustomer(customer arr[],string name,int size)
{
  int count=0;
  for(int i=0;i<size;i++)
    {
      if(arr[i].name.find(name)<arr[i].name.length())
        {
            cout<<"Name    : "<<arr[i].name<<endl
            <<"Address : "<<arr[i].address<<endl
            <<"City    : "<<arr[i].city<<endl
            <<"State   : "<<arr[i].state<<endl
            <<"Zip     : "<<arr[i].zip<<endl
            <<"Telephone: "<<arr[i].telephone_Number<<endl
            <<"Last payment date : "<<arr[i].lastPaymentDate<<endl
		<<"Account Balance : "<<arr[i].accountBalance<<endl<<endl;
            count++;
        }
    }
  if(count==0)
    cout<<"No customer found by name : "<<name<<endl;
}

void sortByBalance(customer arr[],int size)
{
  int i,j, minIndex;
  customer minCustomer;
  ofstream output;
  
  for (i = 0; i < (size - 1); i++)
    output.open("balances.txt");
  for(i=0;i<size;i++)
    {
      output<<arr[i].name<<" "<<arr[i].address<<" "<<arr[i].city<<" "<<arr[i].state<<" "<<arr[i].zip<<" "<<arr[i].telephone_Number<<" "<<arr[i].lastPaymentDate<<" "<<arr[i].accountBalance<<endl;
    }
  output.close();
}
void sortByName(customer arr[],int size)
{
  int i,j, minIndex;
  customer minCustomer;
  ofstream output;

  for (i = 0; i < (size - 1); i++)
  output.open("names.txt");
  for(i=0;i<size;i++)
    {
      output<<arr[i].name<<" "<<arr[i].address<<" "<<arr[i].city<<" "<<arr[i].state<<" "<<arr[i].zip<<" "<<arr[i].telephone_Number<<" "<<arr[i].lastPaymentDate<<" "<<arr[i].accountBalance<<endl;
    }
  output.close();
}

int compareCustomer(customer arr[],string name1,string name2,int size)
{
  int i=0,j=0;
  bool found = false;
  
  while (i<size && !found)
    {
      if(arr[i].name==name1)
	found = true;
      else
	i++;
    }
  
  if(!found)
    cout<<name1<< "was not found in the list!" << endl;
  
  found = false;
  while (j<size && !found)
    {
      if(arr[j].name==name2)
	found = true;
      else
	j++;
    }
  
  if(!found)
    cout<<name2<< "was not found in the list!" << endl;
  
  if(name1>name2)
    {
      arr[j].address=arr[i].address;
      return arr[j].address.length();
    }
  else
    {
      arr[i].address=arr[j].address;
      return arr[j].address.length();
    }
}

       
     
