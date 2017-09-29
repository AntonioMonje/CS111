// Find the distance
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double p1;
   double p2;
   double p3;
   double p4;
   double distance;
 
   cout << "Plug in the x2 and the x1" << endl;
   cin >> p1 >> p2;
   cout << "Plug in the y2 and the y1" << endl;
   cin >> p3 >> p4;

     // Claculations for the problem.

   distance = sqrt((pow(p1 - p2, 2) + pow(p3 - p4, 2))) ;
     cout << distance << endl;
     return 0;
}
