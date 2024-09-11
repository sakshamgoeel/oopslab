#include<iostream>
using namespace std;
class bill
{
    private:
    int amt;
    int u;
    string name;
    public:
    bill()
    {

    }
 void set(string name,int u)
 {
    this->amt=50;
    this->name=name;
    this->u=u;
 }
 int calculate()
 {
   if(u==0)
   {
    return amt;
   }
   else if(u>0&&u<=100)
   {
    amt=amt+(u*0.60);
    return amt;
   }
    else if(u>100&&u<=300)
   {
    amt=amt+60;
    u=u-100;
    amt=amt+(u*0.80);
    return amt;
   }
    else 
   {
    amt=amt+60+160;
    u=u-300;
    amt=amt+((u*90)/100);
    return amt;
   }
 }
 void display()
 {
     amt=calculate();
    if(amt>300)
    {
        int x=0.15*amt;
        amt=amt+x;
    }
    
    cout<<"the total bill amount for "<<name<<" is "<<amt<<"rupees"<<endl;
 }
};
int main()
{
    string name;
    int u;
    int n;
    cout<<"enter total number of names";
    cin>>n;
    bill d1[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter the name and units";
    cin>>name;
    cin>>u;
    d1[i].set(name,u);
    }
    for(int i=0;i<n;i++)

{
    d1[i].display();
}    return 0;
}