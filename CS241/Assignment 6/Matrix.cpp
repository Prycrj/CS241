#include <iostream>
#include <string>

using namespace std;

void Mult2(int* A,int* B,int* R){
  for(int i=0; i<4; i++){
        R[i]= A[i] * B[i];
  }
}
void Print(int* A){
  for(int i=0; i<4; i+= 2){
    for(int j=i; j< 2+i && j<4; j++){
      cout<<A[j]<<"\t";
    }
     cout<< endl;
}
}
int main()
{
int A[4], B[4], R[4];
cout << "Enter the elements of matrix A\n";

for(int i=0; i<4; i+=1){
cin >> A[i];
}
cout << "Enter the elements of matrix B\n";

for(int i=0; i<4; i+=1){
cin >> B[i];
}
cout << "The product of\n";
Print(A);
cout << endl<<"and\n";
Print(B);
cout << endl<< "is\n";
Mult2(A,B,R);
Print(R);
return 0;
}
