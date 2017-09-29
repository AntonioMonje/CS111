#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  int total;  
  int t1;
  int count = 0;
  int t2;
  int t3;
  int total1 = 0;
  int total2 = 0;
  int total3 = 0;
  string fn;
  string ln;
  double avg;
  ifstream inFile;
  ofstream outFile;

  inFile.open("student.dat");
  outFile.open("result.dat");


  if(!inFile)
    {
      cout << "Cannot open the file" << endl;
    }
  else
    {
      inFile >> fn >> ln >> t1 >> t2 >> t3;      
    
      while(inFile)
    {
      total1 += t1;
      total2 += t2;
      total3 += t3;
      count++;
      inFile >> fn >> ln >> t1 >> t2 >> t3; 
   }

 if(count != 0)
   {
   outFile <<  "The average for test 1 is: " << fixed << setprecision(3) << float(total1)/count << endl;
 outFile <<  "The average for test 2 is: " << fixed << setprecision(3) << float(total2)/count << endl;
 outFile <<  "The average for test 3 is: " << fixed << setprecision(3) << float(total3)/count << endl;
   } 
else
   outFile << "There were no numbers in the file.";
 inFile.close();
    }
  outFile.close();
  return 0;
}
