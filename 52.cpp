#include <iostream>
#include <stack>
#include <sstream>

int postCalc(std::string line) {
    std::stack<int> nums;
    std::istringstream isString(line);
    std::string currentChar;

    while (isString >> currentChar) {
        if (currentChar == "+" || currentChar == "-" || currentChar == "*") {
            int num2 = nums.top();
            nums.pop();

            int num1 = nums.top();
            nums.pop();

            if (currentChar == "+") nums.push(num1 + num2);
            else if (currentChar == "-") nums.push(num1 - num2);
            else if (currentChar == "*") nums.push(num1 * num2);
        }

        else nums.push(std::stoi(currentChar));
    }

    return nums.top();
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::cout << postCalc(line) << std::endl;

    return 0;
}
