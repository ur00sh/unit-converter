/*
Author: Urosh Petrovic
Project: Unit converter
Date: 25th April 2022
*/
#include <iostream>

using namespace std;

int main()
{
    float km, mile, cm, inch, m, feet;
    int answ;

    choice:
    cout<<"Depending on your wish, choose the option:"<<endl;
    cout<<"1. Kilometers to Miles"<<endl;
    cout<<"2. Miles to Kilometers"<<endl;
    cout<<"3. Centimeters to Inches"<<endl;
    cout<<"4. Inches to Centimeters"<<endl;
    cout<<"5. Meters to Feet"<<endl;
    cout<<"6. Feet to Meters"<<endl;
    cout<<"(Warning: make sure you're using decimal numbers for more acccurate output.)"<<endl;
    cout<<"Answer: ";
    cin>>answ;

    switch(answ)
    {
        case 1:
            cout<<"Insert the intended length in kilometers: ";
            cin>>km;

            mile = km * 0.6213712;

            cout<<km<<" kilometers equals "<<mile<<" miles."<<endl;
            break;
        case 2:
            cout<<"Insert the intended length in miles: ";
            cin>>mile;

            km = mile * 1.609344;

            cout<<mile<<" miles equals "<<km<<" kilometers."<<endl;
            break;
        case 3:
            cout<<"Insert the intended length in centimeters: ";
            cin>>cm;

            inch = cm * 0.3937008;

            cout<<cm<<" centimeters equals "<<inch<<" inches."<<endl;
            break;
        case 4:
            cout<<"Insert the intended length in inches: ";
            cin>>inch;

            cm = inch * 2.54;

            cout<<inch<<" inches equals "<<cm<<" centimeters."<<endl;
            break;
        case 5:
            cout<<"Insert the intended length in meters: ";
            cin>>m;

            feet = m * 3.28084;

            cout<<m<<" meters equals "<<feet<<" feet."<<endl;
            break;
        case 6:
            cout<<"Insert the intendede lenght in feet: ";
            cin>>feet;

            m = feet * 0.3048;

            cout<<feet<<" feet equals "<<m<<" meters."<<endl;
            break;
        default:
            cout<<"Error: invalid option. Please try again."<<endl;
            goto choice;
    }
    return 0;
}
