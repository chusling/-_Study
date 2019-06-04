#include <string>
#include <sstream>
#include <iostream>
using namespace std;

namespace autox{

class keypad_time
{
private:
   int _keypad_time;
    /* data */
public:
    keypad_time(int a);
    ~keypad_time() = default;
    int entry_time(string s, string keypad);


};
}//namespace of autox