#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

const int MAX_EMP = 100;
struct employee
{
  string fn;
  string ln;
  char gender;
  double pay;
  int ID;
  int age;
};

// prototypes
int readData(employee ar[]);
void findMale(employee ar[], int num);
void findEmployee(employee ar[], int num);
employee getOldest(employee ar[], int num);
void printEmployee(employee e);

int main()
{
  int num;
  int i;
  employee oldest;
  employee ar[MAX_EMP];
  num = readData(ar);
  cout << "their are " << num << " employees." << endl;
  findMale(ar, num);
  findEmployee(ar, num);
  oldest = getOldest(ar, num);
  cout << oldest.fn << endl;
  printEmployee(oldest);

  return 0;
}

int readData(employee ar[])
{
  int num = 0;
  ifstream inFile;
  if(!inFile)
    cout << "No file found!" << endl;
  
  inFile.open("employees.dat");
  
  inFile >> ar[num].fn >> ar[num].ln >> ar[num].gender >> ar[num].pay >> ar[num].ID >> ar[num].age;
  while(inFile)
    {
      num++;
      inFile >> ar[num].fn >> ar[num].ln >> ar[num].gender >> ar[num].pay >> ar[num].ID >> ar[num].age;      
    }
  
  inFile.close();
  return num;
}

void findMale(employee ar[], int num)
{
  ofstream outFile;
  int i;
  outFile.open("maleOut.dat");  
  for(int i = 0; i < num; i++)
    {
      if(ar[i].gender == 'M')
	outFile << left << setw(10) << ar[i].ID << " " << setw(10) << ar[i].fn << " " << setw(10) << ar[i].ln << endl;
    }
  outFile.close();
}
void findEmployee(employee ar[], int num)
{
  int i;
  int x;
  cout << "Enter the ID of the employee you want to find: " << endl;
  cin >> x;
  bool found = false;
  for(int i = 0; !found && i < num; i++)
    {
      if(x == ar[i].ID)
	{
	  found = true;
	  cout << left << setw(10) << ar[i].ID << " " << setw(10) << ar[i].fn << " " << setw(10) << ar[i].ln << endl;	  	
	}
    }
  if(found == false)
    {
    cout << "Thier is no employee ID " << x << endl;
    }
}

employee getOldest(employee ar[], int num)
{
  int oldest;
  int o = 0;
  oldest = ar[0].age;

  int i;
  for(i = 0; i < num; i++)
    {
      if(ar[i].age > oldest)
	{
         oldest = ar[i].age;
	 o = i;
	}
    }
  return ar[o];
}

void printEmployee(employee e)
{
  cout << left << e.fn << " " << e.ln << " " << e.gender << " " << e.pay << " " << e.ID << " " << e.age << endl;;
}
