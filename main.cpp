#include <iostream>
#include <algorithm>
#include "assert.h"
using namespace std;
template <typename T>
class super_vector {
public:
    super_vector(size_t n = 1) : arr_size(n), cur(0) {
        arr = new T[arr_size];
        first = arr;
        last = arr;
    }

    ~super_vector() {
        delete[] arr;
    }

    T* begin() { return first; }
    T* end() { return first + cur; }

    bool empty() const { return cur == 0; }

    size_t size() const { return cur; }

    T& operator[](size_t index) {
        assert(index < cur);
        return arr[index];
    }

    void push_back(T value) {
        if (cur == arr_size) {
            size_t new_size = arr_size * 2;
            T* new_arr = new T[new_size];
            for (size_t i = 0; i < arr_size; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            arr = new_arr;
            arr_size = new_size;
            first = arr;
        }
        arr[cur++] = value;
        last = arr + cur;
    }

    void pop_back() {
        if (cur == 0) return;
        --cur;
        last = arr + cur;
        if (cur < arr_size / 2 && arr_size > 1) {
            size_t new_size = arr_size / 2;
            T* new_arr = new T[new_size];
            for (size_t i = 0; i < cur; ++i) {
                new_arr[i] = arr[i];
            }
            delete[] arr;
            arr = new_arr;
            arr_size = new_size;
            first = arr;
            last = arr + cur;
        }
    }

    T* find(const T& value) {
        for (T* it = begin(); it != end(); ++it) {
            if (*it == value)
                return it;
        }
        return end();
    }

private:
    size_t arr_size;
    size_t cur;
    T* arr;
    T* first;
    T* last;
};


int main() {
    int n= 8;
    super_vector<int> sv;
    for(int i = 0; i < n; ++i){
        sv.push_back(i + 1);
    }
    cout << *(sv.end() - 1) << '\n';
   for(auto i : sv){
       cout << i;
   }
}
