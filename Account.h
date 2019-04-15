#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

using namespace std;
class Account{
private:
    //attributes
    string name;
    double balance;
    
public:
   //methods
   void set_balance(double bal){balance=bal;}
   double get_balance(){return balance;}
   void set_name(string n);
   string get_name();
   bool deposit(double amount);
   bool withdraw (double amount);
};


#endif // _ACCOUNT_H
