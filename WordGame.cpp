#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name, age, city, college, job, animal, petName;
  
  cout << "This is a fantastic Word Game!!!" << endl;
  cout << "Please enter the information asked for and watch the fun unfold!" << endl;
  cout << "What is your name? ";
  getline (cin, name);
  cout << "How old are you or at least how old do you claim to be:";
  getline (cin, age);
  cout << "Name your favorite city:";
  getline (cin, city);
  cout << "Name a college:";
  getline (cin, college);
  cout << "What profession do you want to be when you grow up:";
  getline (cin, job);
  cout << "What is your favorite animal:";
  getline (cin, animal);
  cout << "What is your pet's name (current, future, or past):";
  getline (cin, petName);
  cout << "Ready for the fun? Press [Enter]";
  
  
  cout << "" << endl;
  cout << "\nThere once was a person named " << name << " who lived in ";
  cout << city << ". At the age of " << age << ", " << name  << endl;
  cout << "went to college at " << college << ". " << name;
  cout << " graduated and sent to work as a " << job << ". Then" << endl;
  cout << name << " adopted a(an) " << animal << " named " << petName;
  cout << ". They both lived happily ever after." << endl;

}
