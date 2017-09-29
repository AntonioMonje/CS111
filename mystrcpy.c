#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void mystrcpy(const char source[], char dest[]);
int main()
{
  char source[20] = "Hello";
  char dest[20] = "university";
  mystrcpy(source, dest);
  cout << dest;
  cout << endl;
  return 0;
}

void mystrcpy(const char source[], char dest[])
{
  int i;
  for(i = 0; source[i] != '\0'; i++)
    {
      dest[i] = source[i]; 
    }
  dest[i] = '\0';
}
