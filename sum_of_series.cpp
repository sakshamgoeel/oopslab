#include<iostream>
using namespace std;
class sum
{
private:
int n;
public:
sum(int n)
{
    this->n=n;
}
void input()
{
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
int maxi=0;
int j,k, sum, ax, x;
for(int i=0; i<n; i++)
{
sum=0;
x=1;
ax=i;
for(j=i;j<n;j=(j+x))
{
for(k=ax;k<=j;k++)
{
sum+=arr[k];
ax++;
}
x++;
}
maxi=max (sum, maxi) ;
}
cout<<maxi;
}
};
int main()
{
    int n;
    cout<<"enter the size of the array"; 
    cin>>n;
    sum obj(n);
    obj.input();
}