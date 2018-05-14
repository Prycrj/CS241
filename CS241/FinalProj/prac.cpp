#include <iostream>
#include <string>
using namespace std ;


void char_subset(char *B, int len, char *D, int len2, int index)
{
    if (index >= len)
    {
      cout<<"{";
        for (char i = 0; i < 6; ++i)
        {
            cout<< D[i];
        }
            cout<<'\n';

        return;
    }
    char_subset(B, len, D, len2, index+1);

    D[len2] = B[index];
    char_subset(B, len, D, len2+1, index+1);
}

void int_subset(int *A, int len, int *C, int len2, int index)
{
    if (index >= len)
      cout<<"{";
    {

        for (int i = 0; i < len2; ++i)
        {
            cout<<C[i]<<",";
        }
            cout<< "}";
            cout<<'\n';

          return;

    }

    int_subset(A, len, C, len2, index+1);

    C[len2] = A[index];
    int_subset(A, len, C, len2+1, index+1);
}



int main()
{
  int A[6];
  char B[6];
  int C[6] ={0};
  char D[6]={0};
  string selection;
   cout<< "Would you like to enter 'char' or 'int' Elements?\n";
   cin>>selection;

   cout<<"Enter 6 elements\n";
   int i=0;
   while((selection !="char") && (selection != "int")){
     cout<< "Invalid Input; Please Enter 'char' or 'int'\n";
     cin>>selection;
   }
   if (selection=="char"){

     while(i<6){
       cin>>B[i];
       i++;
     }
       char_subset(B, 6, D, 0, 0);
     }


   if (selection=="int"){

      while(i<6){
      cin>>A[i];
      i++;
   }
   int_subset(A, 6, C, 0, 0);

}

return 0;
}
