#ifndef SW_H_INCLUDED
#define SW_H_INCLUDED

#include <cstring>
#include <iostream>
#include "note.h"
using namespace std;
class SmartWatches : public ElectronicDevice {
public: SmartWatches(string model, int serialnumber, int os);
void print() const override;
void set_os(int os2);
int get_os() const;
private:
    int os;
};

#endif // SW_H_INCLUDED
