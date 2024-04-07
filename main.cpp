#include <iostream>
#include <vector>

int main() {
    // 13.6.1
    /*
    int size = 0;
    std::cout << "Input vector size:\n" ;
    while (size < 1) {
        std::cin >> size;
    }
    std::vector<int> vec;
    std::cout << "Input numbers:\n";
    int element;
    for (int i = 0; i < size; i++) {
        std::cin >> element;
        vec.push_back(element);
    }
    std::cout << "Input number to delete:\n";
    std::cin >> element;
    
    int k = vec.size() - 1;
    for (; vec[k] == element && k >= 0; k--) {}

    for (int i = k - 1; i >= 0; i--) {
        if (vec[i] == element) {
            for (int j = i; j != k; j++) {
                std::swap(vec[j], vec[j+1]);
            }
            k--;
        }
    }
    
    for (int k = vec.size() - 1; k >= 0 && vec[k] == element; k--) {
        vec.pop_back();
    }

    std::cout << "Result: ";
    for (int i=0 ; i<vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    */
   

}