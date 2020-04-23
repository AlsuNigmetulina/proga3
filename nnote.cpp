
#include "note.h"

ElectronicDevice::ElectronicDevice() {
    model = "none";
    serialnumber = 0;
    }
ElectronicDevice::ElectronicDevice(string model1, int serialnumber1) {
    model = model1;
    if (serialnumber1 > 0){
    serialnumber = serialnumber1;}
    }
ElectronicDevice::ElectronicDevice(const ElectronicDevice&n){
    model = n.model;
    serialnumber = n.serialnumber;}

void ElectronicDevice::set_model(string model2)
{
    model = model2;
}
string ElectronicDevice::get_model() const
{
    return model;
}
void ElectronicDevice::set_serialnumber(int serialnumber2)
{
    if (serialnumber2 > 0) {
    serialnumber = serialnumber2;}
}
int ElectronicDevice::get_serialnumber() const
{

    return serialnumber;

}
ElectronicDevice& ElectronicDevice::operator= (const string &s)
{
    model = s.substr(0, s.find(' '));
    return *this;
}
ElectronicDevice& ElectronicDevice::operator= (const int &i)
{
    serialnumber = i;
    return *this;
}




