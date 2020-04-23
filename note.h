#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
class ElectronicDevice {
protected:
    string model;
    int serialnumber;
public:

    ElectronicDevice();
    ElectronicDevice(string model1, int serialnumber1);
    ElectronicDevice(const ElectronicDevice&n);
        virtual void print() const =0;
ElectronicDevice& operator= (const string &s);
ElectronicDevice& operator= (const int &i);
void set_model(string model2);
string get_model()const;
void set_serialnumber(int serialnumber2);
int get_serialnumber() const;

};
#endif // NOTE_H_INCLUDED
