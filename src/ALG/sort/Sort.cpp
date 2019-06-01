
#include "Sort.h"

Sort_state::Sort_state(int a) {
_Bubble_array_num = a;
};
Sort_state::Sort_state(int a, int b):_Bubble_array_num(a),_Slection_array_num(b){};

void Sort_state::sort_swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void Sort_state::Bubble_sort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - 1; j++) {
            if (arr[i] > arr[j]) {
                sort_swap(arr[i],arr[j]);
            }
        }
    }
}

  void Sort_state::Selection_sort(std::vector<int> arr) {
      for (int i = 0; i < arr.size(); i++) {
          int min_flag = i;
          for (int j = i; j < arr.size(); j++) {
              if (arr.at(j) < arr.at(min_flag)) {
                  sort_swap(arr[j],arr[min_flag]);
                  min_flag = j;
              }
            }
            int temp = arr[min_flag];
            arr[min_flag] = arr[i];
            arr[i] = temp; 
            LOG(INFO) << "temp: "<< temp; 

      }
     while (0) {
        std::cout <<"run error";
        // q.pop();
        char *ptr = "l";
        // *ptr = 0;
    }
  };

