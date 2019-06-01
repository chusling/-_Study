#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <glog/logging.h>

class Sort_state {

    public:
    Sort_state(int a);
    Sort_state(int a, int b);

    ~Sort_state() = default;
    void Bubble_sort(std::vector<int> &arr);
    void Selection_sort(std::vector<int> arr);
   
    private:
    void Bubble_array_deal();
    void sort_swap(int &a, int &b);
    private:
    int _Bubble_array_num;
    int _Slection_array_num;



};



