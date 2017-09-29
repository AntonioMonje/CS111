#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

void fillArray(int ar[], int SIZE);
void printArray(int ar[], int SIZE);
bool findKey(int ar[], int key);
void selectionSort(int ar[], int SIZE);
int main()
{ 
  int ar[SIZE];
  int key;
  fillArray(ar, SIZE);
  cout << endl;
  printArray(ar, SIZE);
  cout << endl;
  cout << "Enter a key:";
  cin >> key;
  findKey(ar, key);
  cout << endl;
  selectionSort(ar, SIZE);
  return 0;
}

void fillArray(int ar[], int SIZE)
{
  int i;
  for(i = 0; i < SIZE; i++)
    {
      cout << "Enter a number:";
      cin >> ar[i];
    }
}

void printArray(int ar[], int SIZE)
{
  for(int i = 0; i < SIZE; i++)
    {
      cout << ar[i] << " ";
    }
  cout << endl;
}

bool findKey(int ar[], int key)
{
  for(int i = 0; i < SIZE; i++)
    {
      if(ar[i] == key)
	{
	cout << key << " was found in the array!" << endl;
	return true;
	}
    }
  cout << key << " was not found in the array." << endl;
  return false;
}

void selectionSort(int ar[], int SIZE)
{
  int startScan, minIndex, minValue;

  for(startScan = 0; startScan < (SIZE - 1); startScan++)
    {
      minIndex = startScan;
      minValue = ar[startScan];
      for(int i = startScan + 1; i < SIZE; i++)
	{
	  if(ar[i] < minValue)
	    {
	      minValue = ar[i];
	      minIndex = i;
	    }
	}
      ar[minIndex] = ar[startScan];
      ar[startScan] = minValue;
    }
  for(int i = 0; i < SIZE; i++)
    {
      cout << ar[i] << " ";
    }
  cout << endl;

}
