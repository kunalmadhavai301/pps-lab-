 #include <iostream>
 #include <string>
 using namespace std;
 int main() {
 string str = "hi";
 string greeting = str + ",kunal";
 cout << "Concatenation: " << greeting << endl;
 string part = greeting.substr(3, 9); 
 cout << "Substring: " << part << endl;
 size_t pos = greeting.find("kunal");
 cout << "Find: 'kunal' found at position " << pos << endl;
 string replaced = greeting;
 replaced.replace(pos, 6, "darshan");
 cout << "Replace: " << replaced << endl;
 string inserted = greeting;
 inserted.insert(3, "cool");
 cout << "Insert: " << inserted << endl;
 string erased = greeting;
 erased.erase(2, 7); 
 cout << "Erase: " << erased << endl;
 string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
 cout << "To Uppercase: " << uppercase << endl;
 string lowercase = greeting;
 for (char &c : lowercase) c = tolower(c);
 cout << "To Lowercase: " << lowercase << endl;
 return 0;
}
