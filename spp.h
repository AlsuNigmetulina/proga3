#ifndef SPP_H_INCLUDED
#define SPP_H_INCLUDED
#include <cstring>
#include <iostream>
#include "note.h"
using namespace std;
class Smartphone : public ElectronicDevice {
public: Smartphone(string model, int serialnumber, int camera);
void print() const override;
void set_camera(int camera2);
int get_camera() const;
private:
    int camera;
};




#endif // SPP_H_INCLUDED
