#ifndef HEAD_H
#define HEAD_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/*********************************************************************************************************************************
1. Display a list of appetizers and allow the user to select one (1). If the user’s selection is invalid, give the user the
  “Two Caesar Side Salads”.
*****************************************************************************************************************************/

//Name: appetizer()
//Parameters: 0
//Return: string
//Flowchart:
//Label   Task                                                                       Goto
//01      (start)                                                                    02
//02      Initialize variable 'app'                                                  03
//03      /cout<< "Welcome to Applebees :)"<<endl;/                                  04
//04      /cout<<endl;/                                                              05
//05      Display Appetizers Options                                                 06
//06      Prompt User For Appetizer Selection                                        07
//07      Read in Appetizer Selection                                                08
//08      Check Number Input for corresponding Appetizer Selection                   09
//09      Save selection as new variable 'choice'                                    10
//10      Return 'choice'                                                            11
//11      (exit)

string appetizer()
{
  float app;
  cout<< "Welcome to Applebees :)"<<endl;
  cout<<endl;


 cout<<"...........Appetizers........\n" ;
 cout<<"1. Two Caesar Side Salads     (800  Cal.)\n";
 cout<<"2. Spinach + Artichoke Dip    (960  Cal.)\n";
 cout<<"3. Crunchy Onion Rings        (1300 Cal.)\n";
 cout<<"4. Boneless Wings             (1160 Cal.)\n";
 cout<<"5. Mozzarella Sticks          (910  Cal.)\n";

  cout<<endl<< "For our '2' for '20' special, what will be your appetizer?"<<endl;
  cin>>app;

   string selection;
if (app == 1)
{ selection = "Two Caesar Side Salads     (800  Cal.)";
   }
else if (app == 2)
{ selection ="Spinach + Artichoke Dip    (960  Cal.)" ;
  }
else if (app == 3)
{ selection ="Crunchy Onion Rings        (1300 Cal.)";
  }
else if (app == 4)
{ selection ="Boneless Wings             (1160 Cal.)";
  }
else if (app == 5)
{ selection ="Mozzarella Sticks          (910  Cal.)";
  }
else
{ selection= "Two Caesar Side Salads     (800  Cal.)";
  }

string choice;
choice = selection;
return choice;
 }

string first = appetizer(); //Call for Appetizer selection

/*********************************************************************************************************************************
2. Display a list of entrees and allow the user to select two (2) separately. For any invalid selection, give the user the
  “Chicken Tenders Basket.
*********************************************************************************************************************************/

//Name: entrees()
//Parameters: 0
//Return: string
//Flowchart:
//Label   Task                                                                       Goto
//01      (start)                                                                    02
//02      Initialize variables 'entr1' and 'entr2'                                   03
//03      Display Entree Options                                                     04
//04      Prompt User For first Entree Selection                                     05
//07      Read in Entr1 Selection                                                    08
//08      Check Number Input for corresponding Entree Selection                      09
//09      Save selection as new variable 'choice'                                    10
//10      Return 'choice'                                                            11
//11      (exit)


string entrees()
{
  float entr1, entr2;

 cout<<".........Entrees.........\n" ;
 cout<<"1. Chicken Tenders Basket       (1150 Cal.)\n";
 cout<<"2. Oriental Chicken Salad       (1420 Cal.)\n";
 cout<<"3. Firecracker Shrimp Cavatappi (1970 Cal.) [Plus 3.50]\n";
 cout<<"4. The American Standard        (1010 Cal.) \n";
 cout<<"5. Blackened Tilapia            (510 Cal.)\n";
 cout<<"6. Whisky Bacon Burger          (1240 Cal.)\n";
 cout<<"7. Double-Glazed Baby Back Ribs - Half Rack (550 Cal.) [Plus 3.50]\n";
 cout<<"8. Cedar Grilled Lemon Chicken  (580 Cal.)\n";
 cout<<"9. Fiesta Lime Chicken          (1140 Cal.)\n";
 cout<<"10.Three-Cheese Chicken Cavatappi (1280 Cal.)\n";

 cout<<endl<< "\nWhat will be your First Entree Selection? ";
 cin >> entr1;


 string selection;
if (entr1== 1)
{ selection = "Chicken Tenders Basket       (1150 Cal.)";
   }
else if (entr1== 2)
{ selection ="Oriental Chicken Salad       (1420 Cal.)" ;
  }
else if (entr1== 3)
{ selection ="Firecracker Shrimp Cavatappi (1970 Cal.)";
  }
else if (entr1== 4)
{ selection ="The American Standard        (1010 Cal.)";
  }
else if (entr1== 5)
{ selection ="Blackened Tilapia            (510 Cal.)";
  }
else if (entr1== 6)
{ selection = "Whisky Bacon Burger         (1240 Cal.)";
   }
else if (entr1== 7)
{ selection ="Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)" ;
  }
else if (entr1==8 )
{ selection ="Cedar Grilled Lemon Chicken   (580 Cal.)";
  }
else if (entr1== 9)
{ selection ="Fiesta Lime Chicken           (1140 Cal.)";
  }
else if (entr1== 10)
{ selection ="Three-Cheese Chicken Cavatappi (1280 Cal.)";
  }
else
{ selection= "Chicken Tenders Basket         (1150 Cal.)";
  }

string choice;
choice = selection;
return choice;
 }

string second = entrees(); //Call for Entree1 Selection

//Name: entrees2()
//Parameters: 0
//Return: string
//Flowchart:
//Label   Task                                                                       Goto
//01      (start)                                                                    02
//02      Initialize variable 'entr2'                                                03
//03      Prompt User For first Entree Selection                                     04
//04      Read in Entr2 Selection                                                    05
//05      Check Number Input for corresponding Entree Selection                      06
//06      Save selection as new variable 'choice'                                    07
//07      Return 'choice'                                                            08
//08      (exit)

 string entrees2()
{
  float  entr2;
  cout<<endl<< "What will be your Second Entree Selections? ";
  cin>>entr2;

 string selection;
if (entr2==1)
{ selection = "Chicken Tenders Basket       (1150 Cal.)";
   }
else if (entr2==2)
{ selection ="Oriental Chicken Salad        (1420 Cal.)" ;
  }
else if (entr2==3)
{ selection ="Firecracker Shrimp Cavatappi  (1970 Cal.)";
  }
else if (entr2==4)
{ selection ="The American Standard         (1010 Cal.)";
  }
else if (entr2==5)
{ selection ="Blackened Tilapia             (510 Cal.)";
  }
else if (entr2==6)
{ selection = "Whisky Bacon Burger          (1240 Cal.)";
   }
else if (entr2==7)
{ selection ="Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)" ;
  }
else if (entr2==8)
{ selection ="Cedar Grilled Lemon Chicken    (580 Cal.)";
  }
else if (entr2==9)
{ selection ="Fiesta Lime Chicken            (1140 Cal.)";
  }
else if (entr2==10)
{ selection ="Three-Cheese Chicken Cavatappi (1280 Cal.)";
  }
else
{ selection= "Chicken Tenders Basket         (1150 Cal.)";
  }
string choice;
choice = selection;
return choice;
 }

string third = entrees2(); //Call for Entree2 selection

/*********************************************************************************************************************************
3. Calculate the user’s subtotal, tax (8.87), total, 15%, 18% and 20% gratuity; and then, display a spatially formatted receipt
   with the user’s order and the above values rounded to two decimal places.
*********************************************************************************************************************************/

//Name: receipt()
//Parameters: 0
//Return: nothing
//Flowchart:
//Label   Task                                                                                               Goto
//01      (start)
//02      Initialize logfile
//03      Create "rayona.txt"
//04      Initialize 'subtotal','subtotalwTax','fifteen','eighteen','twenty'
//05      <if (logfile is open)> {print 'first','second,'and 'third' selections;}
//06      Set base subtotal to $20.00 fixed to two decimal places
//07      If user selects both additonal charge options ('3'&&'7'), subtotal+=7.00
//08      If user selects an additional charge with something else ('3'||'7'), subtotal+=3.50
//09      print to receipt -> subtotal
//10      print to receipt -> subtotalwTax= subtotal * 0.0887 + subtotal;
//11      print to receipt -> Gratuities at 15,18,20 percent (subtotal*(0.15)|subtotal*(0.18)|subtotal*(0.20)
//12      (exit logfile)
//13      Display order selections ('first','second','third)' to user
//14      Display subtotal set to two decimal spaces
//15      Display subtotalwTax= subtotal * 0.0887 + subtotal;
//16      Display Gratuities at 15,18,20 percent (subtotal*(0.15)|subtotal*(0.18)|subtotal*(0.20)
//17      (exit)


void receipt()
{
 fstream logfile;
 logfile.open("rayona.txt", fstream::out );
 float subtotal,subtotalwTax,fifteen,eighteen,twenty;
 if (logfile.is_open()){

logfile<<fixed<<setprecision(2);
logfile<<"|*********************Receipt********************|\n";
logfile<<"\n";
logfile <<first;
logfile<<"\n";
logfile<<second;
logfile<<"\n";
logfile<<third;

subtotal= 20.00;


if (second=="Firecracker Shrimp Cavatappi (1970 Cal.)")
{
  if(third=="Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)")
{
    subtotal+= 7.00;}
  else
  {
    subtotal+=3.50;
  }
}


else if(second=="Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)" )
{
  if(third=="Firecracker Shrimp Cavatappi (1970 Cal.)")
{
  subtotal+=7.00;
}
 else
 {
   subtotal+=3.50;

 }
}
else if ((third=="Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)")||(third=="Firecracker Shrimp Cavatappi (1970 Cal.)") )
{
  subtotal+=3.50;
}

subtotalwTax= subtotal * 0.0887 + subtotal;

fifteen=subtotal* 0.15;
eighteen=subtotal* 0.18;
twenty=subtotal* 0.20;


logfile<<"\n";
logfile<<"................................................\n";
logfile<< "Subtotal: ";
logfile<<subtotal;
logfile<<"\n";
logfile<<"subtotal with Tax: ";
logfile<< subtotalwTax;
logfile<<"\n";
logfile<< "\nGratuity:"<<"\n"<<" 15 | 18 |  20 " ;
logfile<<"\n";
logfile<<fifteen<<"|"<<eighteen<<"|"<<twenty;
}
logfile.close();

cout<<"|*********************Recipt********************|\n";
cout<<"\n";
cout <<first;
cout<<"\n";
cout<<second;
cout<<"\n";
cout<<third;
cout<<"\n";
cout<<"..................Subtotal.....................\n";
cout<<"$";
cout<<fixed<<setprecision(2)<<subtotal;
cout<<"\n";
cout<<"Subtotal with Tax: "<<"$";
cout<<subtotalwTax;
cout<<"\n";
cout<<"Gratuities:"<<endl;
cout<<"15% -----------$"<<fifteen;
cout<<"\n";
cout<<"18% -----------$"<<eighteen;
cout<<"\n";
cout<<"20% -----------$"<<twenty;
}
 #endif

 
