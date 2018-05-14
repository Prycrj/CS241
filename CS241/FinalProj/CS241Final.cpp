/*
Name: Rayona Pryce
Date: 5/14/18
Version: Final
Description: Write a program that stores all the subsets of a set consisting of at most six (6) elements. The program
should prompt the user to enter the elements of the set which should be letters or digits; and then,
it should create a le that lists all the subsets of the set. Each subset should be on its own line and
written in set notation.
*/
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std ;

void printSet(string A[], int count){

  ofstream fin ("Pow_Set.txt");
  if (fin.is_open()){

  int print_check=0;
  fin<<"The Subsets are:"<<endl;

   for (int i=0; i< (1<<count); i++) {
     fin<< "{";
     for (int j=0; j<count; j++){
       if((i  & (1<<j))> 0)
         //cout<< A[j]<< ",";
         fin<< A[j]<< ",";
     }
     fin<<"}"<<endl;
     print_check++;
   }
   cout<<endl<<endl<< "***Printed "<<print_check<< " Sets to 'Pow_Set.txt***";
   fin.close();
  }
}


int main()
{
  string  A[6];
   string input;
   int count=0;

   for (int i=0; i<6; i++){
    cout<< "Enter Element or 'break' \n";
    cin>>input;
    if(input=="break"){
      break;
   }
    else{
      A[i]=input;
      count++;
        }
   }

    cout<<endl<<endl<<count<<" Elements : [";
    for(int i=0; i<6; i++)
     {
       cout<< A[i];
       }
  int k= pow(2,count);
   cout<<"]"<<" "<<" = "<< k << " possible sets"<<endl;


      printSet(A,count);

   return 0;
 }
