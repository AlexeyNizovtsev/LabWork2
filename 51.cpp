#include <iostream>
#include <stack>
#include <string>

bool allFine(std::string line) {
    std::stack<char> brackets;

    for (char bracket: line) {
        if (bracket == '(' || bracket == '[' || bracket == '{') brackets.push(bracket);

        else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (brackets.empty()) return false;

            char openBracket = brackets.top();
            brackets.pop();
            if ( (openBracket != '(' && bracket == ')' ) ||
                 (openBracket != '[' && bracket == ']' ) ||
                 (openBracket != '{' && bracket == '}' )) {
                return false;
            }
        }
    }

    return brackets.empty();
}

int main() {
    std::string line;
    std::cin >> line;

    if (allFine(line)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
