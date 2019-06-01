#include <iostream>
#include <queue>
#include <vector>

using namespace std;
namespace autox {

struct car_info
{
    double speed;
    double location;
    double time2end;
    double leng2end;
    /* data */
};



class Autox_lan {

   public:
        Autox_lan (int a);
        ~Autox_lan () = default;
        int autox_max_group (vector<double>&speed, vector<double>&loca, double dest);

    private:
        int _car_num;
        car_info _car_msg;

};

}//naamespaceee autox
