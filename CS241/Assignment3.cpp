
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool IsSet(string filename);

int main()
{
string data[2] = {"data1.txt","data2.txt"};
for(int i = 0;i < 2; i += 1)
{
cout << data[i] << (IsSet(data[i])?(" does"):(" does not")) << " represent a set\n";
}
return 0;
}


bool IsSet(string filename){
  
  ifstream ray;
  ray.open(filename);
  int count=0;
  int sizeOfarray = 353;
  int array[sizeOfarray];
 if (ray.is_open()){
   
   while (ray >> array[count] )   
   {
     count++;
   }
  int i, j;
  for (i = 0; i < sizeOfarray - 1; i++)      
  for (j = 0; j < sizeOfarray-i-1; j++) 
  if (array[j] > array[j+1])
{
  int mktemp = array[j];
  array[j] = array[j+1];
  array[j+1] = mktemp;
}
   for(int i= -0; i < sizeOfarray; i++)
   {
     int j = i+1;
     if(0<=i && i < sizeOfarray)
     {
  if(array[i] == array[j])
{
        return false;
}
}
    }
    return true;
   ray.close();

 }
}