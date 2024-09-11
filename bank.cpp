#include<iostream>
#include<string>
using namespace std;
class BankAccoount{
private: 
    string Name;
    int accNo;
    string type;
    float balanceAmt;
public:
void assign(){
    cout<<"            ENTER BANK DETAILS         "<<endl;
    cout<<"enter the name of the account holder: "<<endl;
    cin>>Name;
    cout<<"enter the account number            :"<<endl;
    cin>>accNo;
    cout<<"enter the type of the account       :"<<endl;
    cin>>type;
    cout<<"enter the balance amount            :"<<endl;
    cin>>balanceAmt;
    }
void deposit(){
    int choice;
    int amount;
    
    cout<<"enter 1 to deposit money any other to cancel  "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
         cout<<"enter the amount to deposit: "<<endl;
         cin>>amount;
         if(amount>0){
            balanceAmt=balanceAmt+amount;
            cout << "Amount deposited successfully.\n";
         }
        
         else{
            cout << "Invalid amount. Please enter a positive value.\n";
         }
         break; 
        default:
            cout << "Invalid choice. Deposit canceled.\n";
            break;


    }
}
void withdraw(){
    int choice;
    int amount;
    cout<<"enter 1 to withdraw money or any other to cancel  "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
         cout<<"enter the amount to withdraw: "<<endl;
         cin>>amount;
         if(amount>0&& amount<=balanceAmt){
            balanceAmt=balanceAmt-amount;
            cout << "Amount withdrawed successfully.\n";
         }
        
         else{
            cout << "Invalid amount. Please enter a positive value.\n";
         }
         break; 
        default:
            cout << "Invalid choice. withdrwal canceled.\n";
            break;
     }
}
void display(){
    cout<<"            BANK DETAILS        "<<endl;
    cout<<"Account holder's name:  "<<Name<<endl;
    cout<<"Account number       :  "<<accNo<<endl;
    cout<<"Type of account      :  "<<type<<endl;
    cout<<"Balance amount       :  "<<balanceAmt<<endl;

}

    
};
int main(){
    
    cout<<"enter the total number of customers"<<endl;
    int n;
    cin>>n;
    BankAccoount a[n];
    for(int i=0;i<n;i++)
    {
    a[i].assign();
    a[i].deposit();
    cout<<endl<<endl<<"before withdrawl: "<<endl<<endl;
    a[i].display();
    cout<<endl<<endl;
    a[i].withdraw();
    a[i].display();
    return 0;
    }
}