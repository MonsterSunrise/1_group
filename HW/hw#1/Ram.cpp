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


// 이 코드를 작성하기 위해서 사용된 개념

// 생성자와 소멸자: 생성자는 객체가 생성될 때 호출되고, 소멸자는 객체가 소멸될 때 호출된다. 이 코드에서 Ram::Ram()은 생성자이고, Ram::~Ram()은 소멸자이다.
// 배열: mem은 char 타입의 배열을 사용한다
// using namespace std: std 네임스페이스를 전역으로 사용하겠다고 선언했다.  std::cout, std::endl 등을 cout, endl로 간단하게 사용할 수 있다.

