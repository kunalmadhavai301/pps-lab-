#include <iostream> 
using namespace std; 
class BankAccount { 
private: 
string accountNumber; 
double balance; 
public: 
BankAccount(string accNum, double initialBalance) { accountNumber = accNum; 
balance = initialBalance; 
} 
void deposit(double amount) { 
if (amount > 0) { 
balance += amount; 
} 
} 
void withdraw(double amount) { 
if (amount > 0 && amount <= balance) { 
balance -= amount; 
} else { 
cout << "Insufficient funds or invalid amount." << endl; } 
} 

double getBalance() const { 
return balance; 
} 
void displayAccountDetails() const { 
cout << "Account Number: " << accountNumber << endl; 
cout << "Balance: $" << balance << endl; 
} 
}; 
int main() { 
BankAccount myAccount("123456789", 1000.00); 
myAccount.displayAccountDetails(); 
myAccount.deposit(500.00); 
cout << "After deposit:" << endl; 
myAccount.displayAccountDetails();
myAccount.withdraw(200.00); 
cout << "After withdrawal:" << endl; 
myAccount.displayAccountDetails(); 
return 0; 
} 