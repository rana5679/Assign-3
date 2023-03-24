#include "Person.h"
#include "Appointment.h"

using namespace std;

class customer : public Person
{
private:
    string MechanicID;
    Appointment app;
    
public:
    customer();
    void set_mechid(string id);
    string get_mechid();
    void set_app(int hour , int min);
    Appointment get_app();
    bool operator==(customer cus2);
    bool operator >(customer cus2);
    bool operator < (customer cus2);
    
};


