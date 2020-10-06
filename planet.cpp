#include <iostream>
#include "planet.h"

Planet::Planet(int mass, int dist, int temp) : m_mass{mass}, m_orbit_distance{dist}, m_temp{temp}
{}

Planet::~Planet()
{}

int Planet::mass()
{
    return m_mass;
}

int Planet::dist()
{
    return m_orbit_distance;
}

int Planet::temp()
{
    return m_temp;
}

void Planet::set_mass(int mass)
{
    m_mass = mass;
}

void Planet::set_dist(int dist)
{
    m_orbit_distance = dist;
}

void Planet::set_temp(int temp)
{
    m_temp = temp;
}
