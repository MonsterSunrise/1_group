#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram(){
    for (int i = 0; i < 100 * 1024; i++)    // 100 * 1024 크기의 메모리 배열 mem을 0으로 초기화한다.
    {
        mem[i] = 0;
    }
    size = 100 * 1024;     // size 멤버 변수를 100 * 1024로 초기화한다.
}

Ram::~Ram() {  // Ram 클래스의 소멸자를 정의한다.

    std::cout << "메모리 제거됨" << std::endl;
}

char Ram::read(int address)  // read 함수를 정의한다. 주어진 주소에 있는 값을 반환한다.
    return mem[address];
}

void Ram::write(int address, char value) { // write 함수를 정의한다. 주어진 주소에 주어진 값을 저장한다.

    mem[address] = value;
}
