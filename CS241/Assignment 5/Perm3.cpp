#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Perm3()
{
  ofstream fin ("alphabetperm.txt");
  if (fin.is_open()){

  int count=0;

  for(char a='a'; a<= 'z'; ++a){
   for(char b= 'a'; b<='z'; ++b){
     if(b==a) continue;
       for(char c='a'; c<='z'; ++c){
         if (c==a) continue;
         if (c==b) continue;
      fin<<a<<b<<c<<'\n';
       count++;
     }
   }
 }
  fin<< count << '\n';
  fin.close();
}
}

int main()
{
  Perm3();
  return 0;
}
