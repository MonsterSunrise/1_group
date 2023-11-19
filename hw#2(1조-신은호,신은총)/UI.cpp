#include "UI.h"

bool UI::isErr() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(99, '\n');
        return true;
    }
    return false;
}

int UI::getMenu() {
    int menu;
    while (true) {
        std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        std::cin >> menu;
        if (isErr() == false && (menu == 1 || menu == 2 || menu == 3 || menu == 4)) return menu;
        std::cout << "[ERROR: 적절하지 않은 입력] 1, 2, 3, 4 중 하나만 입력하기" << std::endl;
    }
    return menu;
}

int UI::getShape() {
    int shape;
    while (true) {
        std::cout << "선:1, 원:2, 사각형:3 >> ";
        std::cin >> shape;
        if (isErr() == false && (shape == 1 || shape == 2 || shape == 3)) return shape;
        else std::cout << "[ERROR: 적절하지 않은 입력] 1, 2, 3 중 하나만 입력하기" << std::endl;
    }
}

int UI::getIdx() {
    int idx;
    while (true) {
        std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
        std::cin >> idx;
        if (isErr() == false || idx >= 0) return idx;
        std::cout << "[ERROR: 적절하지 않은 입력] 0 이상의 정수만 입력하기" << std::endl;
    }
}
