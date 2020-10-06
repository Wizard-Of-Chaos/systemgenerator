#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED
#include "planet.h"
class System
{
private:
    vector<Planet> m_planets;
    int m_total_mass;

public:
    System();
    ~System();
    vector<Planet> planets();
    int total_mass();
    void set_mass(int mass);
    void add_planet(Planet p);
    void add_planets(vector<Planet> p);
};

#endif // SYSTEM_H_INCLUDED
