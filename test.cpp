#include <iostream>
#include <string>

// 두 문자열을 더하는 함수
std::string sum(const std::string &s1, const std::string &s2) {
    std::string result;
    int carry = 0;
    int i = s1.length() - 1;
    int j = s2.length() - 1;

    // 각 자릿수 더하기
    while (i >= 0 || j >= 0 || carry != 0) {
        int digit_sum = carry;
        if (i >= 0) {
            digit_sum += s1[i] - '0';
            i--;
        }
        if (j >= 0) {
            digit_sum += s2[j] - '0';
            j--;
        }
        carry = digit_sum / 10;
        digit_sum %= 10;
        result = char('0' + digit_sum) + result;
    }

    return result;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::string result = sum(a, b);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
