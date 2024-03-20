#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> set;

    char operation;
    std::string word;

    while (std::cin >> operation) {
        if (operation == '#') 
            break;

        std::cin >> word;

        if (operation == '+')  set.insert(word);

        else if (operation == '-') set.erase(word);

        else if (operation == '?') {

            if (set.find(word) != set.end()) std::cout << "YES" << std::endl;
                
            else std::cout << "NO" << std::endl;
              
        }
    }

    return 0;
}
