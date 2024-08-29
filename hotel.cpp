#include<iostream>
#include<string>
using namespace std;
class Hotel{
private: 
    int Rno;
    string Name;
    float Tariff;
    int NOD;
    float calc(){
        float amount=NOD * Tariff;
        if(amount>10000){
            amount=1.05*amount;
        }
        return amount;
    }
public:
void checkin(){
    cout<<"enter Room number: "<<endl;
    cin>>Rno;
    cout<<"enter customer name: "<<endl;
    cin>>Name;
    cout<<"Enter the per day charge (Tariff): "<<endl;
    cin>>Tariff;
    cout<<"enter the Number of days  of stay: "<<endl;
    cin>>NOD;
}
void checkout(){
    cout<<"           checkout details        "<<endl;
    cout<<"  ROOM NUMBER           : "<<Rno<<endl;
    cout<<"  Name                  : "<<Name<<endl;
    cout<<"  Tariff(charge per day :)"<<Tariff<<endl;
    cout<<"  Number of days of stay: "<<NOD<<endl;
    cout<<"  Total Amount          : "<<calc()<<endl;
    cout <<"-----------------------------\n";

}
};
int main(){
    Hotel h;
    h.checkin();
    h.checkout();
    return 0;
}