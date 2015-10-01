#include <iostream>
#include "main.h"
#include <math.h>
using namespace std;
char typeForm;
char figure;
string units;
string unitss = "Enter units. (Use abbreviations only).";
double h; //height
double b;//base
double b2; //second base for trapezoid.
double w; //width
double l; //length
double d; //diameter and/or radius


double a; //area
double c; //circumference
double p; // perimeter
double v; //volume
double sA; //surface area


int main() {
    cout << "Formula Calculator.\n Enter the type of formula.(ex: a for area)." <<endl;
    cin >> typeForm;
    switch (typeForm){
        case 'a':
            area();
            break;
        case 'v':
            volume();
            break;
    }


}

void area()
{
    cout << "Enter the shape you want. (ex: t for triangle)(z for trapezoid)."<<endl;
    cin >> figure;
    switch (figure) {
        case 't':
            cout << "Enter height." <<endl;
            cin >> h;
            cout << "Enter Base." <<endl;
            cin >> b;
            cout << unitss<<endl;
            cin >> units;
            a = (h*b)/2;
            break;
        case 'r':
            cout <<"Enter width."<<endl;
            cin >> w;
            cout <<"Enter length."<<endl;
            cin >> l;
            cout <<unitss<<endl;
            cin >> units;
            a = w*l;
            break;
        case 's':
            cout <<"Enter a side length."<<endl;
            cin >> w;
            cout <<unitss<<endl;
            cin >> units;
            a = pow(w,2);
            break;
        case 'z':
            cout <<"Enter base 1."<<endl;
            cin >> b;
            cout <<"Enter base 2."<<endl;
            cin >> b2;
            cout <<"Enter Height."<<endl;
            cin >> h;
            cout <<unitss<<endl;
            cin >> units;
            a = ((b + b2)/2)*h;
            break;
        case 'c':
            cout <<"Enter the radius."<<endl;
            cin >> d;
            cout <<unitss<<endl;
            cin >> units;
            a = M_PI*pow(d,2);
            break;
//still need hexagon.
    }
    total();
}

int volume()
{
    cout << "Enter the polyhedron. (o for right cone)"<<endl;
    cin >> figure;
    switch (figure)
    {
        //sphere
        case 's':
            cout << "Enter the radius."<<endl;
            cin >> d;
            cout << unitss<<endl;
            cin >> units;
            v = M_PI*pow(d,3)*4/3;
            break;
            //pyramid
        case 'p':
            cout << "Enter the length."<<endl;
            cin >> l;
            cout << "Enter the width."<<endl;
            cin >> w;
            cout << "Enter the height."<<endl;
            cin >> h;
            cout << unitss<<endl;
            cin >> units;
            v = (l*w*h)/3;
            break;
        case 'c':
            cout << "Enter a side length."<<endl;
            cin >> l;
            cout << unitss<<endl;
            cin >> units;
            v = pow(l,3);
            break;
        case 'r':
            cout <<"Enter the length."<<endl;
            cin >> l;
            cout << "Enter the height."<<endl;
            cin >> h;
            cout << "Enter the width."<<endl;
            cin >> w;
            cout << unitss<<endl;
            cin >> units;
            v = l*h*w;
            break;
        case 'o':
            cout <<"Enter the radius."<<endl;
            cin >> d;
            cout <<"Enter the height."<<endl;
            cin >> h;
            cout << unitss<<endl;
            cin >> units;
            v = M_PI*pow(d,2)*(h/3);
            break;
    }
    total();
}




int total()
{
    switch (typeForm)
    {
        case 'a':
            cout << "The Area is equal to: "<<a<<" "<<units<<"^2"<<endl;
            break;
        case 'v':
            cout << "The Volume is equal to: "<<v<<" "<<units<<"^3"<<endl;
            break;
    }
}
