#include <iostream>
#include "sw.h"
#include "note.h"
#include <cstring>
using namespace std;

SmartWatches::SmartWatches(string model, int serialnumber, int battery) : ElectronicDevice{ model, serialnumber}, os {os} {}
void SmartWatches::print() const {
    cout << "SMARTWATCHES";
cout << "MODEL:" << model << "\n";
cout << "SERIALNUMBER:"<< serialnumber<< "\n";
cout <<"OS:" << os <<"\n";}

void SmartWatches::set_os(int os2)
{
    if (os2 > 0) {
    os = os2;}
}
int SmartWatches::get_os() const
{

    return os;

}
