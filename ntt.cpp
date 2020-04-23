#include <iostream>
#include "nt.h"
#include "note.h"
#include <cstring>
using namespace std;

Notebook::Notebook(string model, int serialnumber, int memory) : ElectronicDevice{ model, serialnumber}, memory {memory} {}
void Notebook::print() const{
cout << "NOTEBOOK";
cout << "MODEL:" << model << "\n";
cout << "SERIALNUMBER:"<< serialnumber<< "\n";
cout <<"MEMORY:" << memory <<"\n";}
void Notebook::set_memory(int memory2)
{
    if (memory2 > 0) {
    memory = memory2;}
}
int Notebook::get_memory() const
{

    return memory;

}
