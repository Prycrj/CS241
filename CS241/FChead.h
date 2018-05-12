#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>


using namespace std;


char btoc(bool value) //Takes the bool value an returns it is either 'T' or 'F'
{
  return (value)?('T'):('F');
}

void printA(int array[])
{
   cout<< "[";
  for(int i=0; i<16; i++)
  {
    cout<< btoc( array[i] ) <<" ";
  }
  cout<<"]"<<endl;
}

void conjunction(int op1[], int op2[], int R[]) //returns true when both op1 && op2 are true; else false
{
  int k = 0;

 for (int i=0; i<16; i++)
 {
    if (op1[i] == 1 && op2[i]==1)
        R[k] = 1;
    else
        R[k] = 0;
      k++;
     }
     printA(R);
}

void disjunction(int op1[], int op2[],int R[])//returns true when either x || y is true; else false
{
  int k = 0;

 for (int i=0; i<16; i++)
 {
    if (op1[i] == 1 || op2[i]==1)
        R[k] = 1;
    else
        R[k] = 0;
      k++;
     }
     printA(R);
}

void negation(int op1[],int R[]) //returns opposite of negated value
{
  int k = 0;

 for (int i=0; i<16; i++)
 {
    if (op1[i] == 1)
        R[k] = 0;
    else
        R[k] = 1;
      k++;
     }
     printA(R);
}

void implication(int op1[],int op2[], int R[]) //returns true when x&&y is true, or if x is false; otherwise false
{
  int k=0;
   for (int i=0; i<16; i++){
    if (op1[i] == 1 && op2[i]== 0)
      R[k]=0;
    else
      R[k]=1;
        k++;
}
    printA(R);
}
void equivalence(int op1[],int op2[], int R[]) //returns true when both values are equal; otherwise false
{
  int k=0;
   for (int i=0; i<16; i++){
     if(op1[i]==op2[i])
        R[k]=1;
     else
        R[k]=0;
   k++;
}
printA(R);
}

//Truth Table Evaluation for (A'->C') && (A->D) && (B->C) -> (B->D)
void Q_1(int A[],int B[],int C[], int D[],int R[],int nA[], int nC[]){
int store1[16],store2[16],store3[16],store4[16],store5[16],store6[16];
cout<< "Truth Table Evaluation of: (A'->C') && (A->D) && (B->C) -> (B->D)";
cout<<endl<< "(A'->C'):";
implication(nA,nC,R);
for(int i=0; i<16; i++)
{
  store1[i]=R[i];
}
cout<<"\n""(A->D):";
implication(A,D,R);
for(int i=0; i<16; i++)
{
  store2[i]=R[i];
}
cout<<"\n""(B->C):";
implication(B,C,R);
for(int i=0; i<16;i++)
{
  store3[i]=R[i];
}
cout<<"\n""(B->D):";
implication(B,D,R);
for(int i=0; i<16; i++)
{
  store4[i]=R[i];
}
cout<<"\n""(A'->C') && (A->D):";
conjunction(store1,store2,R);
for(int i=0; i<16; i++)
{
  store5[i]=R[i];
}
cout<<"\n""(A'->C') && (A->D) && (B->C):";
conjunction(store5,store3,R);
for (int i=0;i<16;i++)
{
  store6[i]=R[i];
}
cout<<"\n""(A'->C') && (A->D) && (B->C) ->(B->D):";
implication(store6,store4,R);
cout<<endl<<endl;
}









void start(int A[],int B[],int C[], int D[],int R[],int contra[],int taut[],int Mem2[], int Mem3[], int Mem4[])
{
 string selection;

 cout << "\n1.Negation\n" << "2.Conjunction\n" << "3.Disjunction\n" << "4.Implication\n" << "5.Equivalence\n" << "6.Store\n" << "7.Quit\n" << "\n";

  cout << "Select the Operation you would like to use:";
  cin  >> selection;
  if (selection == "1" || selection == "Negation"){
    string op1;
    cout << "Enter Operand to Negate: Only Enter: A,B,C,D,0,1,2,3 or 4  ";

    cin >> op1;
       if (op1 == "A")
          negation(A,R);
       else if(op1 == "B")
          negation(B,R);
       else if(op1 == "C")
          negation(C,R);
       else if(op1 == "D")
         negation(D,R);
       else if(op1 == "0")
        negation(contra,R);
       else if (op1== "1")
         negation(taut,R);
       else if(op1 == "2")
         negation(Mem2,R);
       else if(op1 == "3")
         negation(Mem3,R);
       else if (op1 == "4")
          negation(Mem4,R);

     start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);

  }

     //Functions with more than one operand



      else if(selection == "2" || selection == "Conjunction"){
         string op1, op2;
         int param1[16],param2[16];

          cout << "First Operand : Only Enter :A,B,C,D,0,1,2,3 or 4 :";
          cin >> op1;
          cout << "Second Operand : Only Enter :A,B,C,D,0,1,2,3 or 4:";
          cin >> op2;

          //Conjunction Antecendant
          if(op1 == "A"){
           for(int i = 0; i < 16; i++){
            param1[i] = A[i];
           }
         }  else if(op1 == "B"){
           for(int i = 0; i < 16; i++){
             param1[i] = B[i];
           }

         }else if(op1 == "C"){
           for(int i = 0; i < 16; i++){
             param1[i] = C[i];
           }

         }else if(op1 == "D"){
           for(int i = 0; i < 16; i++){
             param1[i] = D[i];
           }
         }else if(op1 == "0"){
           for(int i = 0; i < 16; i++){
            param1[i]=contra[i];
          }
        }else if (op1== "1"){
          for(int i = 0; i < 16; i++){
           param1[i]=taut[i];
          }

          }
          else if(op1 == "2"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem2[i];
           }

          }
          else if(op1 == "3"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem3[i];
           }

         }else if(op1 == "4"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem4[i];
           }
          }

          //Conjunction Consequent
          if(op2 == "A"){
           for(int i = 0; i < 16; i++){
             param2[i] = A[i];
           }
         }  else if(op2 == "B"){
           for(int i = 0; i < 16; i++){
             param2[i] = B[i];
           }

         }else if(op2 == "C"){
           for(int i = 0; i < 16; i++){
             param2[i] = C[i];
           }

         }else if(op2 == "D"){
           for(int i = 0; i < 16; i++){
             param2[i] = D[i];
           }

        }else if(op2 == "0"){
          for(int i = 0; i < 16; i++){
           param2[i]=contra[i];
         }
       }else if (op2== "1"){
         for(int i = 0; i < 16; i++){
          param2[i]=taut[i];
         }


        }else if(op2 == "2"){
            for(int i = 0; i < 16; i++){
            param2[i] = Mem2[i];
           }

          }else if(op2 == "3"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem3[i];
           }

         }else if(op2 == "4"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem4[i];
           }
          }

        conjunction(param1,param2,R);
         start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);
}
       //End of Conjunction



        else if(selection == "3" || selection == "Disjunction"){
         string op1, op2;
         int param1[16],param2[16];

          cout << "First Operand : Only Enter: A,B,C,D,0,1,2,3 or 4 : ";
          cin >> op1;
          cout << "Second Operand : Only Enter: A,B,C,D,0,1,2,3 or 4: ";
          cin >> op2;

          //Disjunction Antecendant
          if(op1 == "A"){
           for(int i = 0; i < 16; i++){
             param1[i] = A[i];
           }
         }  else if(op1 == "B"){
           for(int i = 0; i < 16; i++){
             param1[i] = B[i];
           }

         }else if(op1 == "C"){
           for(int i = 0; i < 16; i++){
            param1[i] = C[i];
           }

         }else if(op1 == "D"){
           for(int i = 0; i < 16; i++){
             param1[i] = D[i];
           }

        }else if(op1 == "0"){
          for(int i = 0; i < 16; i++){
           param1[i]=contra[i];
         }

        }else if (op1== "1"){
         for(int i = 0; i < 16; i++){
          param1[i]=taut[i];
         }
        }else if(op1 == "2"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem2[i];
           }
         } else if(op1 == "3"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem3[i];
           }

         }else if(op1 == "4"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem4[i];
           }
          }

          //Conjunction Consequent
          if(op2 == "A"){
           for(int i = 0; i < 16; i++){
             param2[i] = A[i];
           }
         }  else if(op2 == "B"){
           for(int i = 0; i < 16; i++){
             param2[i] = B[i];
           }

         }else if(op2== "C"){
           for(int i = 0; i < 16; i++){
             param2[i] = C[i];
           }

         }else if(op2 == "D"){
           for(int i = 0; i < 16; i++){
            param2[i] = D[i];
           }

         }else if(op2 == "0"){
           for(int i = 0; i < 16; i++){
            param2[i]=contra[i];
          }
        }else if (op2== "1"){
          for(int i = 0; i < 16; i++){
           param2[i]=taut[i];
          }
         }else if(op2 == "2"){
           for(int i = 0; i < 16; i++){
            param2[i] = Mem2[i];
           }
          }
          else if(op2 == "3"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem3[i];
           }

         }else if(op2 == "4"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem4[i];
           }
          }

         disjunction(param1,param2,R);
         start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);


}          //End of Disjunction


       else if(selection == "4" || selection == "Implication"){
         string op1,op2;
         int param1[16],param2[16];



          cout << "First Operand : Only Enter: A,B,C,D,0,1,2,3 or 4 : ";
          cin >> op1;
          cout << "Second Operand : Only Enter: A,B,C,D,0,1,2,3 or 4: ";
          cin >> op2;

        //Implication Antecendant
          if(op1 == "A"){
           for(int i = 0; i < 16; i++){
             param1[i] = A[i];
           }
         }  else if(op1 == "B"){
           for(int i = 0; i < 16; i++){
             param1[i] = B[i];
           }

         }else if(op1 == "C"){
           for(int i = 0; i < 16; i++){
             param1[i] = C[i];
           }

         }else if(op1 == "D"){
           for(int i = 0; i < 16; i++){
            param1[i] = D[i];
           }
          }
          else if(op1== "2"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem2[i];
           }

         }else if(op1 == "0"){
           for(int i = 0; i < 16; i++){
            param1[i]=contra[i];
          }
        }else if (op1== "1"){
          for(int i = 0; i < 16; i++){
           param1[i]=taut[i];
          }

          }else if(op1 == "3"){
            for(int i = 0; i < 16; i++){
            param1[i] = Mem3[i];
           }

         }else if(op1 == "4"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem4[i];
           }
          }

          //Implication Consequent
          if(op2 == "A"){
           for(int i = 0; i < 16; i++){
             param2[i] = A[i];
           }
         }  else if(op2 == "B"){
           for(int i = 0; i < 16; i++){
             param2[i] = B[i];
           }

         }else if(op2 == "C"){
           for(int i = 0; i < 16; i++){
             param2[i] = C[i];
           }

         }else if(op2== "D"){
           for(int i = 0; i < 16; i++){
            param2[i] = D[i];
           }
         }else if(op2 == "0"){
           for(int i = 0; i < 16; i++){
            param2[i]=contra[i];
          }
        }else if (op2== "1"){
          for(int i = 0; i < 16; i++){
           param2[i]=taut[i];
          }
          }
          else if(op2 == "2"){
            for(int i = 0; i < 16; i++){
            param2[i] = Mem2[i];
           }

          }
          else if(op2 == "3"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem3[i];
           }

         }else if(op2 == "4"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem4[i];
           }
          }


      implication(param1,param2,R);
      start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);
}


       //End of IMPLICATION

         else if(selection == "5" || selection == "Equivalence"){
         string op1, op2;
         int param1[16],param2[16];


          cout << "First Operand : Only Enter: A,B,C,D,0,1,2,3 or 4 : ";
          cin >> op1;
          cout << "Second Operand : Only Enter: A,B,C,D,0,1,2,3 or 4: ";
          cin >> op2;
          //Equivalence Antecendant
          if(op1 == "A"){
           for(int i = 0; i < 16; i++){
             param1[i] = A[i];
           }
         }  else if(op1 == "B"){
           for(int i = 0; i < 16; i++){
             param1[i] = B[i];
           }

         }else if(op1 == "C"){
           for(int i = 0; i < 16; i++){
             param1[i] = C[i];
           }

         }else if(op1 == "D"){
           for(int i = 0; i < 16; i++){
             param1[i] = D[i];
           }

         }else if(op1 == "0"){
           for(int i = 0; i < 16; i++){
            param1[i]=contra[i];
          }
        }else if (op1== "1"){
          for(int i = 0; i < 16; i++){
           param1[i]=taut[i];
          }

         }else if(op1 == "2"){
            for(int i = 0; i < 16; i++){
             param1[i] =Mem2[i];
           }

         }else if(op1 == "3"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem3[i];
           }

         }else if(op1 == "4"){
            for(int i = 0; i < 16; i++){
             param1[i] = Mem4[i];
           }
          }

          //Equivalence Consequent
          if(op2 == "A"){
           for(int i = 0; i < 16; i++){
             param2[i] = A[i];
           }
         }  else if(op2 == "B"){
           for(int i = 0; i < 16; i++){
             param2[i] = B[i];
           }

         }else if(op2 == "C"){
           for(int i = 0; i < 16; i++){
            param2[i] = C[i];
           }

         }else if(op2 == "D"){
           for(int i = 0; i < 16; i++){
            param2[i] = D[i];
           }


        }else if(op2 == "0"){
          for(int i = 0; i < 16; i++){
           param2[i]=contra[i];
         }
       }else if (op2== "1"){
         for(int i = 0; i < 16; i++){
          param2[i]=taut[i];
        }
        } else if(op2 == "2"){
            for(int i = 0; i < 16; i++){
             param2[i] = Mem2[i];
           }

          }else if(op2 == "3"){
            for(int i = 0; i < 16; i++){
            param2[i] = Mem3[i];
           }

         }else if(op2== "4"){
            for(int i = 0; i < 16; i++){
            param2[i] = Mem4[i];
           }
          }

         equivalence(param1,param2,R);
         start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);
}

       //End of EQUIVALENCE

       else if(selection == "6" || selection == "Store"){
         string memory;

         cout << "Choose Memory Location '2' '3' or '4': ";
         cin  >> memory;

          if (memory == "2"){
             for(int i = 0; i < 16; i++){
              Mem2[i] = R[i];
             }
             printA(Mem2);
          }else if (memory == "3"){
            for(int i = 0; i < 16; i++){
             Mem3[i] = R[i];
            }
            printA(Mem3);
          }else if (memory == "4"){
            for(int i = 0; i < 16; i++){
             Mem4[i] = R[i];
            }
            printA(Mem4);
          }
        start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);
        //End of Memory Storage

        }
      else if(selection == "7" || selection =="Quit"){
        cout<<endl<<" Exited :) ";
         return;
      }
      else {
      cout << "\nInvalid Input... Enter the Word or Number\n";
    start(A,B,C,D,R,contra,taut,Mem2,Mem3,Mem4);
  }
}
