/*The following table lists the freezing and boiling points of several substances. Write a program that asks the user 
to enter the temperature, and then shows all the substances that will freeze at the temperature and all that will 
boil at that temperature. For example, if the user enters -20 the program should report that water will freeze and 
oxygen will boil at the temperature also the elements that have no change.*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
  int Temperature;
  std::cout << "This program compares the temperature in fahrenheit that the user enters,\n";
  std::cout << "compares it with the following table, and shows all substances that will\n";
  std::cout << "freeze and boil at that temperature\n\n";
  
  
  
  std::cout << "Please enter the current temperature in fahrenheit:\n\n";
//   getInt (std::cin, temp);
  
  std::cout << "SUBSTANCE                     FREEZING POINT <F>                  BOILING POINT <F>\n";
  std::cout << "------------------------------------------------------------------------------------\n";
  std::cout << "Ethyl alcohol                  -173                                     172\n";
  std::cout << "Mercury                        -38                                      676\n";
  std::cout << "Oxygen                         -362                                    -306\n";
  std::cout << "Water                           32                                      212\n\n";
  
//   std::cout << "When the temperature is " + temp + " Degrees.";
  
    std::cout<<"Please enter a number for freezing and or boiling points(F):";
    std::cin  >> Temperature;

    std::cout<<"Freezing Point (F)"<<endl;
    if(Temperature <=-173){
        cout<<"Ethyl alcohol            Freezes!"<<endl;
    }else if(Temperature >=172){
        cout<<"Ethyl alcohol            Boils!"<<endl;
    }else{
        cout<<"Ethyl alcohol            No Change"<<endl;
        }
    if(Temperature <=-38){
        cout<<"Mercury            Freezes!"<<endl;
    }else if(Temperature >=676){
        cout<<"Mercury            Boils!"<<endl;
    }else{
        cout<<"Mercury                  No Change"<<endl;
    }
    if(Temperature <=-362){
        cout<<"Oxygen Freezes!"<<endl;
    }else if(Temperature >=-306){
        cout<<"Oxygen                     Boils!"<<endl;
    }else{
        cout<<"Oxygen                  No Change"<<endl;
        }
    if(Temperature <=32){
        cout<<"Water            Freezes!"<<endl;
    }else if(Temperature >=212){
        cout<<"Water            Boils"<<endl;
    }else{
        cout<<"Water                     No Change\n\n"<<endl;
        }
    
    cout<<"SUMMARY\n"<<endl;
    
    
    if(Temperature <=-173){
        cout<<"At this temperature, Ethyl alcohol will freeze."<<endl;
    }else if(Temperature >=172){
        cout<<"At this temperature, Ethyl alcohol will boil."<<endl;
    }else{
        cout<<"At this temperature, nothing happens to Ethyl alcohol."<<endl;
        }
    if(Temperature <=-38){
        cout<<"At this temperature, Mercury will freeze."<<endl;
    }else if(Temperature >=676){
        cout<<"At this temperature, Mercury will boil."<<endl;
    }else{
        cout<<"At this temperature, nothing happens to Mercury."<<endl;
    }
    if(Temperature <=-362){
        cout<<"At this temperature, Oxygen will freeze."<<endl;
    }else if(Temperature >=-306){
        cout<<"At this temperature, Oxygen will boil."<<endl;
    }else{
        cout<<"At this temperature, nothing happens to oxygen."<<endl;
        }
    if(Temperature <=32){
        cout<<"At this temperature, Water will freeze."<<endl;
    }else if(Temperature >=212){
        cout<<"At this temperature, Water will boil."<<endl;
    }else{
        cout<<"At this temperature, nothing happens to water."<<endl;
        }
    
    
    
    
    
return 0;
}
