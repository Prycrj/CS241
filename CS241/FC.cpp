/*
//Name: Rayona Pryce
//Creation: 3/21/18
//Version : 241_Midterm
//Description: 4- Statement Propositional Calculator
*/

#include <iostream>
#include <string>
#include "FChead.h"

using namespace std;

int main()
{

int A[]={1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0} ;
int nA[]={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
int B[]={1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0} ;
int C[]={1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0} ;
int nC[]={0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
int D[]={1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0} ;
int R[16];
int contra[16]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int taut[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int Mem2[16]  = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int Mem3[16]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int Mem4[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

Q_1(A,B,C,D,R,nA,nC);

cout<<"A :";
printA(A);
cout<<"B :";
printA(B);
cout<<"C :";
printA(C);
cout<<"D :";
printA(D);
cout<<"0 :";
printA(contra);
cout<<"1 :";
printA(taut);
cout<<"2 :";
printA(Mem2);
cout<<"3 :";
printA(Mem3);
cout<<"4 :";
printA(Mem4);




start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);

  return 0;
}
