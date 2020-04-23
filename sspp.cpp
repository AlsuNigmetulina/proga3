#include <iostream>
#include "spp.h"
#include "note.h"
#include <cstring>
using namespace std;

Smartphone::Smartphone(string model, int serialnumber, int camera) : ElectronicDevice{ model, serialnumber}, camera {camera} {}
void Smartphone::print() const{
cout << "SMARTPHONE";
cout << "MODEL:" << model << "\n";
cout << "SERIALNUMBER:"<< serialnumber<< "\n";
cout <<"CAMERA:" << camera <<"\n";}
void Smartphone::set_camera(int camera2)
{
    if (camera2 > 0) {
    camera = camera2;}
}
int Smartphone::get_camera() const
{

    return camera;

}
