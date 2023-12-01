#include "MachineUI.h"

bool MachineUI::isErr() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(99, '\n');
        return true;
    }
    return false;
}

void MachineUI::greeting() { std::cout << "-----명품 커피 자판기 켭니다.-----\n"; }
void MachineUI::parting() { std::cout << "프로그램을 종료합니다...\n"; }
void MachineUI::filling() { std::cout << "모든 통을 채웁니다~~\n"; }
void MachineUI::making(std::string name) { std::cout << "맛있는 " << name << " 나왔습니다~~\n"; }
void MachineUI::lacking() { std::cout << "재료가 부족합니다.\n"; }

int MachineUI::getMenu(Recipe* r, int size) {
    int menu = 0;
    while (true) {
        for (int i = 0; i < size; i++)
            std::cout << r[i].showRecipeName() << ':' << i << ", ";
        std::cout << "채우기:" << size << ", 종료:" << size + 1 << ">> ";
        std::cin >> menu;
        if (isErr()) std::cout << "[입력오류] 문자열이 아닌 정수를 입력하세요.\n";
        else if (0 <= menu && menu <= size + 1) return menu;
        else std::cout << "[입력오류] 0 ~ " << size + 1 << " 사이의 정수를 입력하세요.\n";
    }
}

void MachineUI::showMaterial(Material* m) {
    for (int i = 0; i < MATERIAL; i++) {
        std::cout.setf(std::ios::left);
        std::cout << std::setw(9) << m[i].getName();
        int num = m[i].getNumber();
        for (int j = 0; j < num; j++) std::cout << '*';
        std::cout << '\n';
    }
    std::cout << '\n';
}