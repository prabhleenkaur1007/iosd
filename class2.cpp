#include <iostream>
#include "Account.h"

int main() {
    char x{};
    int dep{0},with{0};
    Account sehaj_account;
    sehaj_account.set_name("sehaj's account");
    sehaj_account.set_balance(1000.0);
    
    ////////////
    cout<<"you have present balance of 1000"<<endl;
    for(int i=0;i<2;i++){
    cout<<"enter the character: \na>>DEPOSIT\nb>>WITHDRAW\n"<<endl;
    cin>>x;
    
    if(x!='c'){
    switch(x){
    case 'a':{
    cout<<"amount: ";
    cin>>dep;
    if(sehaj_account.deposit(dep))
        cout<<"deposit done"<<endl;
    else
        cout<<"cannot deposit"<<endl;
    cout<<endl;
    break;
    }
     /////////////////////////////////// 
    case 'b':{
    cout<<"amount: ";
    cin>>with;
    if(sehaj_account.withdraw(with))
        cout<<"withdrawl done"<<endl;
    else
        cout<<"can't withdraw"<<endl;
    cout<<endl;
    break;
    }}}
    else
     cout<<"unknown selection"<<endl;
     
     /////////////////////////////////
    cout<<"net balance: "<<sehaj_account.get_balance()<<endl;
    cout<<endl;  
    }
    return 0;
}
