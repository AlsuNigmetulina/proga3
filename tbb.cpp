#include <iostream>
#include "tb.h"
#include "note.h"
#include <cstring>
using namespace std;

Tablet::Tablet(string model, int serialnumber, int battery) : ElectronicDevice{ model, serialnumber}, battery {battery} {}
void Tablet::print() const{
        cout << "TABLET";
cout << "MODEL:" << model << "\n";
cout << "SERIALNUMBER:"<< serialnumber<< "\n";
cout <<"BATTERY:" << battery <<"\n";}

void Tablet::set_battery(int battery2)
{
    if (battery2 > 0){
    battery = battery2;}
}
int Tablet::get_battery() const
{

    return battery;

}
