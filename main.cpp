#include <iostream>
#include "note.h"
#include "sw.h"
#include "spp.h"
#include "nt.h"
#include "tb.h"
#include <cstring>
using namespace std;

int main()
{
string model;
int serialnumber, camera, memory, battery, os;
Smartphone a("model", 0, 0);
Notebook b("model", 0, 0);
Tablet c("model", 0, 0);
SmartWatches d("model", 0 ,0);

cout << "\n";
cout << "SMARTPHONE INPUT INFO";
a.get_model();
a.get_serialnumber();
a.get_camera();
cin >> model >> serialnumber >> camera;
a.set_model(model);
a.set_serialnumber(serialnumber);
a.set_camera(camera);
a.print();
cout << "NOTEBOOK INPUT INFO";
b.get_model();
b.get_serialnumber();
b.get_memory();
cin >> model >> serialnumber >> memory;
b.set_model(model);
b.set_serialnumber(serialnumber);
b.set_memory(memory);
b.print();
cout << "\n";
cout << "TABLET INPUT INFO";
c.get_model();
c.get_serialnumber();
c.get_battery();
cin >> model >> serialnumber >> battery;
c.set_model(model);
c.set_serialnumber(serialnumber);
c.set_battery(battery);
c.print();
cout << "\n";
cout << "SMARTWATCHES INPUT INFO";
d.get_model();
d.get_serialnumber();
d.get_os();
cin >> model >> serialnumber >> os;
d.set_model(model);
d.set_serialnumber(serialnumber);
d.set_os(os);
d.print();
cout << "\n";
cout << "The end of the program :)";
cout << "\n";


}

