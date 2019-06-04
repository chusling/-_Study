#include"entry_time.h"
#include <sstream>
#include <iostream>
#include <map>
using namespace std;

namespace autox{

keypad_time::keypad_time(int a) {
    _keypad_time = a;
}

int keypad_time::entry_time(string s, string keypad) {

int password_num = stoi(s,0,10);
int keypad_num = stoi(keypad,0,10);
int first_password_num = 0;
int first_password_x = 0;
int first_password_y = 0;

char array[3][3] = {};
for (int i = 0; i < keypad.size(); i++) {
    if (s.at(0) == keypad.at(i)) {
        first_password_num = i;
        first_password_x = i / 3;
        first_password_y = i % 3;
        // break;
    }
    array[(i / 3)][(i % 3)] = keypad.at(i);
}


map<char,int>keypad_map;
for (int i = 0; i < keypad.size(); i++) {
    int key2time = 0;
    key2time = std::max(abs((i / 3) - first_password_x), abs((i % 3) - first_password_y));
    cout << "key2time_ " << i << " value = "<< key2time << endl;
    keypad_map.insert(pair <char, int> (keypad.at(i),key2time));
}
int max_entry_time = 0;
for (int i = 0; i < s.size(); i++) {
    max_entry_time += keypad_map.find(s.at(i))->second;
    cout << "max_entry_time_ " << i << " value = "<< max_entry_time << endl;
}
return max_entry_time;

}

}//namespace of autox