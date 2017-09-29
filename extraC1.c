/*
This program gets numbers from a file
and puts them into an array. Your job
is to make a function that swaps every 
other index of the array around.
For example, 
input:  0 2 4 6 8 10 12 14,
output: 0 12 4 8 6 10 2 14.
Then print onto screen.

There is also a number of errors you
must fix or things that are missing.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int openInputFile(int arr[]);
void swapNumInArr(int arr[], int numInArr);
void printArr(int arr[], int numInArr);

  int main()
{
  const int MAX_NUM = 20;
  int arr[MAX_NUM];
  int numInArr;
 
  numInArr = openInputFile(arr);
  swapNumInArr(arr, numInArr);
  printArr(arr, numInArr);
 
  return 0;
}

int openInputFile(int arr[])
{
  //this function gets input file and puts it 
  //into an array. also gets number of 
  //numbers in file
    
  int count = 0;    
  ifstream inFile;

    inFile.open("Numbers.txt");
    
    if(!inFile)
      {
        cout << "File Not Found!" << endl;
        return 0;
      }
    else
      {
        while(inFile >> arr[count])
	  {
            count++;
	  }
      }
    
    inFile.close();
    return numInArr;
}

void swapNumInArr(int arr[], int numInArr)
{
  for(int i; i < numInArr; i++)
    {

}

void printArr(int arr[], int numInArr)
{
  //prints array onto screen
    
  for(int i = 0; i < numInArr; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
}
