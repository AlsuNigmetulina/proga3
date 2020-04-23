#ifndef TB_H_INCLUDED
#define TB_H_INCLUDED

#include <cstring>
#include <iostream>
#include "note.h"
using namespace std;
class Tablet : public ElectronicDevice {
public: Tablet(string model, int serialnumber, int battery);
void print() const override;
void set_battery(int battery2);
int get_battery() const;
private:
    int battery;
};

#endif // TB_H_INCLUDED
