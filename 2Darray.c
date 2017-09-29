#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE_STU = 5;
const int SIZE_TEST = 3;

void fillArray(int scores[][SIZE_TEST]);
void printArray(const int scores[][SIZE_TEST]);

int main()
{
  int scores[SIZE_STU][SIZE_TEST];
  fillArray(scores);
  printArray(scores);
  return 0;
}

void fillArray(int scores[][SIZE_TEST])
{
  for(int test = 0; test < SIZE_TEST; test++)
    {
      cout << "Enter the score for test#" << test + 1 << endl;
      for(int stu = 0; stu < SIZE_STU; stu++)
	{
	  cout <<" for student#" << stu + 1 << " :";
	  cin >> scores[stu][test];
	}
    }
}
void printArray(const int scores[][SIZE_TEST])
{
  int total = 0;
  double avg = 0;
  cout << endl << setw(12)<< "Test#" << setw(12) << "stu1" << setw(12) <<  "stu2" << setw(12) <<  "stu3" << setw(12) <<  "stu4" << setw(12) <<  "stu5" << setw(12) <<  "Average" << endl;
  for(int test = 0; test < SIZE_TEST; test++)
    {
      cout << setw(12) << test + 1;
      for(int stu = 0; stu < SIZE_STU; stu++)
	{
	  cout << setw(12) << scores[stu][test];
	  total += scores[stu][test];
	}  
      cout << setw(12) << (double)total/SIZE_STU << endl;
      total = 0;
    }
  cout << setw(12) << "AVERAGE:";
  for(int stu = 0; stu < SIZE_STU; stu++)
    {
      for(int test = 0; test < SIZE_TEST; test++)
	avg +=  scores[stu][test];
      
      cout << setw(12) << fixed << setprecision(1) << (double)avg/SIZE_TEST;
      avg = 0;    
    }
  cout << endl;
}

