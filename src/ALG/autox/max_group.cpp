#include"max_group.h"
#include<math.h>
#include<queue>
#include<memory>
using namespace std;
namespace autox {

struct comp {
    bool operator () (const shared_ptr<car_info> car_a, 
                      const shared_ptr<car_info> car_b) const {
        return car_a->location < car_b->location;
    } 
    /* data */
};


Autox_lan::Autox_lan(int a): _car_num(a) {};

int Autox_lan::autox_max_group (vector<double>&speed, vector<double>&loca, double dest) {
    
    car_info car_msg;
    int max_group_num = 0;
    int temp_max_num = 1;
    priority_queue<shared_ptr<car_info>, vector<shared_ptr<car_info>>, comp> car_to_end;

    for (int i = 0; i < speed.size(); i++) {
        car_msg.leng2end = dest - loca.at(i);
        car_msg.location = loca.at(i);
        car_msg.speed = speed.at(i);
        car_msg.time2end = car_msg.leng2end / speed.at(i);
        car_to_end.push(make_shared<car_info> (car_msg));
    }

    for (int i = 0; i < speed.size(); i++) {
        shared_ptr<car_info>temp_car_msg = car_to_end.top();
        car_to_end.pop();
        if (temp_car_msg->time2end > car_to_end.top()->time2end) {
                temp_max_num++;
                car_to_end.top()->time2end =  temp_car_msg->time2end;
        } else {
                if (temp_max_num > max_group_num) {
                    max_group_num = temp_max_num;
                    temp_max_num = 1;
                } 
            }
    }   
    return max_group_num;
};


}