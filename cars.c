#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  int total;
  int m;
  int count = 0;
  int g;
  int total1 = 0;
  int total2 = 0;
  double MPG;
  double total3;
  string cn;
  double avg;
  ifstream inFile;
  ofstream outFile;

  inFile.open("car.dat");
  outFile.open("carout.dat");

  outFile << fixed << setprecision(2) << endl;
  if(!inFile)
    {
      cout << "Cannot open the file" << endl;
    }
  else
    {
      outFile << left << setw(10) << "Model Name" << right << setw(15) << "Miles Driven" << setw(25) << "Gallons of Gas Used" << setw(30) << "MPG" << endl;
      inFile >> cn >> m >> g;

      while(inFile)
	{

	  
 
	  total1 += m;
	  total2 += g;
          MPG = (double)m/g;
          avg += MPG;
          count++;
	  outFile << setw(10) << cn << setw(15) << m << setw(25) << g << setw(30) << MPG << endl;
	  inFile >> cn >> m >> g;

	}

      if(count != 0)
	{
	  outFile << "Total Miles Driven: " << total1  <<" Miles"  << endl;
	  outFile << "Total Gallons of Gas Used: " << total2 << " Gallons" <<endl;
	  outFile << "Average MPG: " << (double)avg/count << " miles per gallon" << endl;
	}
      else
	outFile << "There were no numbers in the file.";
      inFile.close();
    }
    
  outFile.close();
  return 0;
}
