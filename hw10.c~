/*Purpose:  This program fills a array from a struct. It gets the sum of all the numbers of the array and siplays the total points. The first two functions are asking for the user to input items into the function.
Implemented by: Antonio Monje
Date: 11/23/2015
User Information: The inputs are the information that the user inputs that fill the array.
FUNCTIONS: this program contains the main function, getPlayerInfo function, showInfo function, getTotalPoints function, showHighest function)
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct player
{
  string name;
  int PlayerNumber;
  int PlayerPoints;
};

void getPlayerInfo(player &p);
void showInfo(player p);
int  getTotalPoints(player team[], int SIZE);
void showHighest(player team[], int SIZE);

int main()
{
  int SIZE = 12;
  int tpoints;
  int i;
  player p;
  player team[SIZE];
  for(i = 0; i < SIZE; i++)
    {
      cout << "player " << i + 1 <<  endl;
      getPlayerInfo(p);
      team[i] = p;
      cin.ignore();
    }

  for(int i = 0; i < 12; i++)
    {
      cout << "Player " << i +1 << endl;
      showInfo(team[i]);
    }
  tpoints = getTotalPoints(team, SIZE);
  showHighest(team, SIZE);
  return 0;
}

void getPlayerInfo(player &p)
{
 
      cout << "Enter player name: ";
      cin >> p.name;
      cout << endl;
      cout << "Enter player number: ";
      cin >> p.PlayerNumber;
      cout << endl;
      cout << "Enter the player points: ";
      cin >> p.PlayerPoints;
      cout << endl;
    
  while(p.PlayerNumber < 0 || p.PlayerPoints < 0)
    {
      cout << "Invalid numbers! Re-enter: " << endl;
      cout << "Player number: ";
      cin >> p.PlayerNumber;
      cout << endl;
      cout << "Player points: ";
      cin >> p.PlayerPoints;
      cout << endl;
    }
}

void showInfo(player p)
{
      cout << left << setw(12) << p.name << right << setw(25) << "Player Number is: " << p.PlayerNumber << " " << setw(20) << "Player Points: " << p.PlayerPoints << endl;
}

int getTotalPoints(player team[], int SIZE)
{
  int tpoints;
  tpoints = 0;
  for(int i = 0; i < SIZE; i++)
    {
      tpoints += team[i].PlayerPoints;
    }
  cout << "The total amount of points is: " << tpoints << endl;
  return tpoints;
}

void showHighest(player team[], int SIZE)
{
  int i;
  int hi;
  int Highest;
  Highest = team[0].PlayerPoints;
  hi = 0;
  for(i = 1; i < SIZE; i++)
    {
      if(team[i].PlayerPoints > Highest)
	{       
	  Highest = team[i].PlayerPoints;
	  hi = i;
	}
    }
  
  cout << "PLAYER NAME: " << team[hi].name << " " << " PLAYER NUMBER: " << team[hi].PlayerNumber << " " << " earned the most points" << endl;
}

