/*
//Name: Rayona Pryce
//Creation: 2/08/18
//Version : A_1
//Description: The functions conjunction(), disjunction(), negation(), implication(), and equivalence() should return the truth value of the conjunction, disjunction, negation, implication and equivalence connectives respectively. The functions truthTable() return a formatted string of a truth table that consists of all the connectives like the one on the formula sheet. Use the symbols &, |, !, > and = to represent conjunction, disjunction, negation, implication and equivalence in the tables respectively.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

bool conjunction(bool x,bool y) //returns true when both x && y are true; else false
{
 return x&&y;
}
bool disjunction(bool x,bool y)//returns true when either x || y is true; else false
{
  return x||y;
}
bool negation(bool x) //returns opposite of negated value
{
  return !x;
}
bool implication(bool x,bool y) //returns true when x&&y is true, or if x is false; otherwise false
{
 return (conjunction(x == true,y== false))?(false):(true);
}

bool equivalence(bool x,bool y) //returns true when both values are equal; otherwise false
{
  return x==y;
}

char btoc(bool value)
{
  return (value)?('T'):('F');

}

string truthTable()
{
  //truth values for A and B
  string row1A,row1B,row2A,row2B,row3A,row3B,row4A,row4B;

   row1A=btoc(1);
   row2A=btoc(1);
   row3A=btoc(0);
   row4A=btoc(0);

   row1B=btoc(1);
   row2B=btoc(0);
   row3B=btoc(1);
   row4B=btoc(0);

   //truth values for !A
  string row1nA,row2nA,row3nA,row4nA;

  row1nA=btoc(negation(1));
  row2nA=btoc(negation(1));
  row3nA=btoc(negation(0));
  row4nA=btoc(negation(0));

  //truth values for A && B
  string row1AB,row2AB,row3AB,row4AB;

  row1AB=btoc(conjunction(1,1));
  row2AB=btoc(conjunction(1,0));
  row3AB=btoc(conjunction(0,1));
  row4AB=btoc(conjunction(0,0));

  // truth values for A || B
  string row1AoB,row2AoB,row3AoB,row4AoB;

  row1AoB=btoc(disjunction(1,1));
  row2AoB=btoc(disjunction(1,0));
  row3AoB=btoc(disjunction(0,1));
  row4AoB=btoc(disjunction(0,0));

  //truth values for A -> B
  string row1AtB, row2AtB,row3AtB,row4AtB;

  row1AtB=btoc(implication(1,1));
  row2AtB=btoc(implication(1,0));
  row3AtB=btoc(implication(0,1));
  row4AtB=btoc(implication(0,0));

  //truth values for A = B
  string row1AeB,row2AeB,row3AeB,row4AeB;

  row1AeB=btoc(equivalence(1,1));
  row2AeB=btoc(equivalence(1,0));
  row3AeB=btoc(equivalence(0,1));
  row4AeB=btoc(equivalence(0,0));

  //top of chart
  cout<<"A"<<" | "<<"B"<<" | "<<"!A"<<" | "<<"A&&B"<<" | "<<"A||B"<<" | "<<"A->B"<<" | "<<"A==B";
  cout<<endl<<"__________________________________________"<<endl;
  //truth table for A and B
  //-------------------------------------------------------------------row1
  cout<<endl<<row1A<<"   "<<row1B<<"   "<<row1nA<<"    " <<row1AB<<"        "<<row1AoB<<"      "<<row1AtB<<"      "<<row1AeB<<endl;
  //-------------------------------------------------------------------row2
  cout<<endl<<row2A<<"   "<<row2B<<"   "<<row2nA<<"    "<<row2AB<<"        "<<row2AoB<< "      "<<row2AtB<<"      "<<row2AeB<<endl;
  //-------------------------------------------------------------------row3
  cout<<endl<<row3A<<"   "<<row3B<<"   "<<row3nA<<"    "<<row3AB<<"        "<<row3AoB<< "      "<<row3AtB<<"      "<<row3AeB<<endl;
  //-------------------------------------------------------------------row4
  cout<<endl<<row4A<<"   "<<row4B<<"   "<<row4nA<<"    "<<row4AB<<"        "<<row4AoB<<"      "<<row4AtB<<"      "<<row4AeB<<endl;
}

int main() {
cout<< truthTable()<<'\n';
return 0;
}
