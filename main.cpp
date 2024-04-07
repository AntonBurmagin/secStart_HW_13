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

    // 13.6.2 
    /*
    float sum = 0;
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3};
    for (int i = 0; i < items.size(); i++) {
        if (items[i] < 0 || items[i] >= prices.size()) {
            std::cout << "Incorrect item number: " << items[i] << ". It won't be taken into account in the calculation.\n";
        } else {
            sum += prices[items[i]];
        }
    }
    std::cout << "Total sum: "  << sum << std::endl;
    */

    // hw 13.6.3
    /*
    std::vector<int> db(10);
    int realSize = 0;
    int number;
    while (true) {
        std::cout << "Input number:\n";
        std::cin >> number;
        if (number == -1) {
            std::cout << "Database: ";
            for (int i = 0; i< db.size(); i++) {
                std::cout << db[i] << " ";
            }
            std::cout << std::endl;
        } else if (realSize < db.size()) {
            db[realSize] = number;
            realSize++;
        } else {
            for (int i = 0; i < db.size() - 1; i++) {
                std::swap(db[i], db[i+1]);
            }
            db[db.size()-1] = number;
        }
    }
    */



}