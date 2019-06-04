#include "./ALG/sort/Sort.h"
#include <iostream>
#include <queue>
#include <glog/logging.h>
#include <gflags/gflags.h>
#include "./ALG/autox/max_group.h"
#include "./ALG/autox/entry_time.h"

DEFINE_string(lan, "english,french,german", 
"comma-separated list of languages to offer in the 'lang' menu");
DEFINE_bool(foo, false, "a simple"); 
using namespace std;
#define GET_LEN(array, len) {len = sizeof(array) / sizeof(array[0]);}

Sort_state sort_arr(3);
::autox::Autox_lan autox_lan(2);
::autox::keypad_time Keypad_Time(6);
std::priority_queue< int, vector<int>, greater<int> > q;
int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    // FLAGS_log_dir = "./log";
     google::SetLogDestination(google::INFO, "./log");
    int k = 0;
    while (k < 10)
    {
     LOG(INFO) << "hello csl"<< k; 
     k++ ;  /* code */
    }
    
     LOG(INFO) << "I am csl";
     LOG(INFO) << FLAGS_lan; 

    
    cout << "I am csl" << endl;
    cout << FLAGS_lan << endl;
    cout <<"FLAGS_foo_value:"<< FLAGS_foo << endl;
    

    int arr_b[] = {7, 2, 8, 1, 15, 9, 88, 26, 0, 13};
    int arr_c[] = {100, 2, 300, 1, 15, 9, 887, 26, 0, 13};

    int length = 0;
    GET_LEN(arr_b, length);
    vector<int> sort_num;
    vector<int> sort_num2;

    for (int i = 0; i < length - 1; i++) {
        sort_num.emplace_back(arr_b[i]);
        sort_num2.emplace_back(arr_c[i]);
    };

    sort_arr.Bubble_sort(sort_num);
    sort_arr.Selection_sort(sort_num2);
    for (int i = 0; i < sort_num.size() - 1; i++) {
        cout << sort_num.at(i) << endl;
        q.push(sort_num.at(i));
        };
    for (int j = 0; j < sort_num2.size() - 1; j++) {
        cout << sort_num2.at(j) << "\n";
        };

   vector<double>speed = {4.0,2.0,5.0,1.0,8.0};
   vector<double>loca = {3.0,5.0,2.0,1.0,1.5};
   double dest = 10;

int max_group_num = autox_lan.autox_max_group (speed, loca,  dest); 

cout<< "max_group_num = "<< max_group_num<<endl;
string s = "423692";
string keypad = "923857614";
int min_key_time = Keypad_Time.entry_time(s,keypad);
cout<< "min_key_time = "<< min_key_time<<endl;

}
