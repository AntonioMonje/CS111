/*Purpose:  This program makes takes a text file with numbers and odes the calculations on this program. Then it transfers the calculations to the output.txt file we made.
Implemented by: Antonio Monje
Date: 10/19/2015
User Information: The inputs in this program are the numbers entered by the random.txt. Also this uses the  while loop to create the program.
Implementation Method: I used the infile and outfile with a while loop. Also I used and if else statement to make the program.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n1;
  int count = 0;
  int total1 = 0;
  double avg;
  ifstream inFile;
  ofstream outFile;

  inFile.open("Random.txt");
  outFile.open("output.txt");


  if(!inFile)
    {
      cout << "Cannot open the file" << endl;
    }
  else
    {
      inFile >> n1;

      while(inFile)
	{
	  count++;
	  total1 += n1;
	  inFile >> n1;
	}      
	  outFile << "The number of numbers in the file is: " << count << endl;
	  outFile <<  "The sum of the numbers is: " << total1 << endl;
	  outFile <<  "The average for all the numbers is: " << float(total1)/count << endl;
	  inFile.close();  
    }
	  outFile.close();
    
  return 0;
}
