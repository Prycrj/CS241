Name: Rayona Pryce
Date: 2/27/18
Version: A_2
Description: Write a program that evaluates a predicate of the form
(∃x) [P(x)]
The function eWff() should read in and evaluate
each element of the file with (*P)(int); and then, it should return the truth value of (∀x)[(Px)] with the file as the domain of interpretation.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isOdd(int x)
{
  if (x<0)
  {
    x*=-1;
  }
  if (x%2==0)
  {
  return false;
  }
}

bool isMult5(int x)
{
  if (x<0)
  {
    x*=-1;
  }
  if(x%5==0)
  return true;
}

bool eWff (string doi, bool (*P)(int))
{
  int data;

 ifstream content;
 content.open(doi);  //opens content for reading.

 if (content.is_open())
 {
   while (content >> data)
   {
     if(!P(data)) return false;

   }
        return true;

    content.close();
 }
}


int main()
{
string files[2] = {"data1.txt","data2.txt"};
cout << boolalpha;
for(int i = 0;i < 2;i += 1)
{
cout << "Predicate wff evaluates to " << eWff(files[i],isOdd) << " for DOI " << (i +1)
<< " and predicate isOdd()\n";
cout << "Predicate wff evaluates to " << eWff(files[i],isMult5) << " for DOI " << (i + 1)
<< " and predicate isMult5()\n\n";
}
return 0;
}
