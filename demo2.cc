#include <iostream>

namespace ln{
    void cout(const char* msg){
        std::cout << msg;
    }
}

int main(){
    ln::cout("hello,C++!");
    return 0;
}