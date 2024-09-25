#include <iostream>
#include<string>
using namespace std;
int main() 
{
  string str="Hello";
  // concatination
  string greeting =str+"World";
  cout<<"Concatination"<<endl<<greeting<<endl;
  string part = greeting.substr(7,5);
  cout<<"Substring"<<part<<endl;
  size_t pos =greeting.find("World");
   cout<<"Find world at Postition"<<pos<<endl;
  // replace
  string replaced = greeting;
  replaced.replace(pos,5,"C++");
  cout<<"Replace:"<<replaced<<endl;
  string inserted="greeting";
  inserted.insert (5,"beautiful");
  cout<<"insert:"<<inserted<<endl;
  string erased=greeting;
  erased.erase(5,7);
  cout<<"Erase "<<erased<<endl;
  string uppercase=greeting;
  for(char&c:uppercase)c=toupper(c);
  cout<<"To Uppercase"<<uppercase<<endl;
  string lowercase=greeting;
  for(char&c:lowercase)c=tolower(c);
  cout<<"To lowercase:"<<lowercase<<endl;
    return 0;
}