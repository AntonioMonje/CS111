#include <iostream>
using namespace std;

klcfkl
cvlkvb
fjkfjk
xcvkl;cgb

enum place {HOME, SCHOOL, WORK, PARK};
//           0      1      2      3  

//You can omit parameter names in the prototype.
string getPlace(place);

int main()
{
  place myPlace;
  place hisPlace;

  myPlace = SCHOOL;
  hisPlace = HOME;

  cout << "I am at " << myPlace << endl;
  cout << "He is at " << hisPlace << endl;

  //myPlace = 0;  <-- You cannot assign an integer
  myPlace = (place)0; 
  cout << "I am at " << myPlace << endl;
  cout << "I am at " << getPlace(myPlace) << endl << endl;

  const int NUMPLACES = 4;
  string addresses[NUMPLACES] = {"22 Fifth Ave",  "10 Craven Rd", "45 San Marcos Blvd", "33 El Camino Real"} ;

  for(place  p = HOME; p <= PARK; p = (place)(p + 1))
    cout << getPlace(p) << ": " << addresses[p] << endl;

  return 0;
}

string getPlace(place p)
{
  switch(p)
    {
    case HOME:return "home";
    case SCHOOL:return "school";
    case WORK:return "work";
    case PARK:return "park";
    }
}

