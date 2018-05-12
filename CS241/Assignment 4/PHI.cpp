#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int Phi(int n)
{
  if (n<0){
    return 0;
  }
int result = 0;
    for (int i = 1; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}


int main(){

fstream out;
out.open( "data.dat",fstream::out);

for(int i = 1;i <= 100;i += 1)
{
out << setw(3) << setfill('0');
out << "Phi("<<i<<")=" << Phi(i) <<"\n";
}
out.close();
return 0;
}
