#ifndef PLANET_H_INCLUDED
#define PLANET_H_INCLUDED

class Planet {
private: //Metric Units
    int m_mass;
    int m_orbit_distance;
    int m_temp;
public:
    Planet(int mass, int dist, int temp);
    ~Planet()
    int mass();
    int temp();
    int dist();
    void set_mass(int mass);
    void set_temp(int temp);
    void set_dist(int dist);
};


#endif // PLANET_H_INCLUDED
