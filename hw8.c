/*Purpose:  This program makes gets the judge data from the user and outputs the averages. The program gets rid of the lowest and highest numbers from the judges.
Implemented by: Antonio Monje
Date: 10/28/2015
User Information: The inputs are from the judges scores that accepts doubles. Then one function finds the lowest score and another finds the highest. Those two scores get subtracted from the main score and displays the average.
*/


#include <iostream>
#include <iomanip>

using namespace std;

void getJudgeData(double& score1, double& score2, double& score3, double& score4, double& score5);
void calcScore(double& avg, double total, double score1, double score2, double score3, double score4, double score5, double high, double low);
double findLowest(double score1, double score2, double score3, double score4, double score5, double& low);
double findHighest(double score1, double score2, double score3, double score4, double score5, double& high);

int main()
{
  
  double score1;
  double score2;
  double score3;
  double score4;
  double score5;
  double low;
  double high;
  double total;
  double avg;
  cout << fixed << setprecision(1) << endl;
  getJudgeData(score1, score2, score3, score4, score5);
  
  if((score1 < 0 || score1 > 10) || (score2 < 0 || score2 > 10) || (score3 < 0 || score3 > 10) || (score4 < 0 || score4 > 10) || (score5 < 0 || score5 > 10))
    {
      cout << "Invalid Score Entered!" << endl;
    }
  else
    {
  cout << "The average of the scores is: " << endl;
  calcScore(avg, total, score1, score2, score3, score4, score5, high, low); 
  cout << avg << endl;
    }
  return 0;
}
//This function gets the judges scores
void getJudgeData(double& score1, double& score2, double& score3, double& score4, double& score5)
{
  cout << "Enter Judge 1 Score: ";
  cin >> score1;
  cout << "Enter Judge 2 Score: ";
  cin >> score2;
  cout << "Enter Judge 3 Score: ";
  cin >> score3;
  cout << "Enter Judge 4 Score: ";
  cin >> score4;
  cout << "Enter Judge 5 Score: ";
  cin >> score5;
  
}
// THis function calculates the average and gets rid of the highest and lowest numbers.
void calcScore(double& avg, double total, double score1, double score2, double score3, double score4, double score5, double high, double low)
{
  
    findLowest(score1, score2, score3, score4, score5, low);
    findHighest(score1, score2, score3, score4, score5, high);
    total = (score1 + score2 + score3 + score4 + score5)- high - low;
    avg = total/3;
}
//This function finds the highest number
double findHighest(double score1, double score2, double score3, double score4, double score5, double& high)
{
    
    if((score1 > score2) && (score1 > score3) && (score1 > score4) && (score1 > score5))
      {
      high = score1;
      }
    else if((score2 > score1) && (score2 > score3) && (score2 > score4) && (score2 > score5))
      {
      high = score2;
      }
    else if((score3 > score2) && (score3 > score1) && (score3 > score4) && (score3 > score5))
      {
      high = score3;
      }   
    else if((score4 > score1) && (score4 > score2) && (score4 > score3) && (score4 > score5))
      {
      high = score4;
      }
    else
      {
      high = score5;
      }
  
    return high;
}
//This function finds the lowest number
double findLowest(double score1, double score2, double score3, double score4, double score5, double& low)
  {
   
   if((score1 < score2) && (score1 < score3) && (score1 < score4) && (score1 < score5))
     {
      low = score1;
     }		
      else if((score2 < score1) && (score2 < score3) && (score2 < score4) && (score2 < score5))
	{
      low = score2;
	}
      else if((score3 < score2) && (score3 < score1) && (score3 < score4) && (score3 < score5))
	{
	  low = score3;
	}	
      else if((score4 < score1) && (score4 < score2) && (score4 < score3) && (score4 < score5))
	{
      low = score4;
	}	
      else
	{
      low = score5;
	}
   return low;	
  }	    
 
