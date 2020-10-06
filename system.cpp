#include "system.h"

System::System()
{ }

System::~System()
{ }

vector<Planet> System::planets()
{
    return m_planets;
}

int System::total_mass()
{
    return m_total_mass;
}

void System::set_mass(int mass)
{
    m_total_mass = mass;
}
void System::add_planet(Planet p)
{
    m_planets.push_back(p);
}

void System::add_planets(vector<Planet> p)
{
    for (Planet x : p)
    {
        m_planets.push_back(x);
    }
}
