#include<iostream>
using namespace std;
int main ()
{
    int G,S,A,B;
    cout<<"Gold-\nSlver-\nWeight of golden egg-\nWeight of silver egg-\n";
    cin>> G;
    cin>> S;
    cin>> A;
    cin>> B;
    if(G*A>=S*B)
        cout<<"Gold";
    else
        cout<<"Silver";
 
}
