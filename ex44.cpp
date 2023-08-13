
#include <iostream>
#include <math.h>
using namespace std;

double Arctg1 (double x, double e) {
    double arctg = x;
    float k = 1;
    double s = x;
    while(abs(arctg)>e)
        {
        arctg=arctg*x*x;
        arctg=arctg*k;
        k=k+2;
        arctg=arctg/k;
        arctg=-arctg;
        s+=arctg;
        }
    return s; 
    }


int main()
{
    double x, e1, e2, e3, e4, e5, e6, a1, a2, a3, a4, a5, a6;
    cout<<"Type x: ";
    cin >> x; 
    cout<<"Type e1: ";
    cin >> e1; 
    cout<<"Type e2: ";
    cin >> e2; 
    cout<<"Type e3: ";
    cin >> e3; 
    cout<<"Type e4: ";
    cin >> e4; 
    cout<<"Type e5: ";
    cin >> e5; 
    cout<<"Type e6: ";
    cin >> e6; 
    a1=Arctg1(x,e1);
    cout << "The first arctg: " << a1 << endl;
    a2=Arctg1(x,e2);
    cout << "The second arctg: " << a2 << endl;
    a3=Arctg1(x,e3);
    cout << "The third arctg: " << a3 << endl;
    a4=Arctg1(x,e4);
    cout << "The four arctg: " << a4 << endl;
    a5=Arctg1(x,e5);
    cout << "The five arctg: " << a5 << endl;
    a6=Arctg1(x,e6);
    cout << "The six arctg: " << a6 << endl;


    return 0;
}
