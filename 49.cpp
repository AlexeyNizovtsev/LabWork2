#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {
    std::map<int, std::vector<std::string>> studList;

    int classNum;
    std::string name;

    while (std::cin >> classNum >> name) {
        studList[classNum].push_back(name);
    }

    for (int classNum = 9; classNum < 12; classNum++) {
        std::vector<std::string> students = studList[classNum];

        for (auto student: students) {
            std::cout << classNum << " " << student << std::endl;
        }
    }

    return 0;
}
