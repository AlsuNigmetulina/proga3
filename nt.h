#ifndef NT_H_INCLUDED
#define NT_H_INCLUDED

#include <cstring>
#include <iostream>
#include "note.h"
using namespace std;
class Notebook : public ElectronicDevice {
public: Notebook(string model, int serialnumber, int memory);
void print() const override;
void set_memory(int memory2);
int get_memory() const;
private:
    int memory;
};


#endif // NT_H_INCLUDED
