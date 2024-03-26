#include <iostream>
#include <string>


void swap(std::string *a, std::string *b);
std::string sub2(std::string a, std::string b);

/**
 * @brief 두 숫자를 더하는 함수
 * @param a, b 더할 두 숫자 (string)
 * @return result 반환할 두 숫자의 합 (string)
 */
std::string sum2(std::string a, std::string b) {

    std::string result = ""; // 정답 string
    int sum; // 각 자리수의 합을 임시로 저장
    int carry = 0; // 올림
    int sign = 1; // 부호, 1이면 plus 0이면 minus
    int i,j; // 각각 a와 b의 길이

    if (a[0] == '-' && b[0] == '-') {
        sign = 0;
        a.erase(0,1); // minus 부호 삭제
        b.erase(0,1); // minus 부호 삭제
    }
    else if (a[0] == '-' || b[0] == '-') {
        if (a[0] == '-') {
            a.erase(0,1); // minus 부호 삭제
            swap(a,b);
            return sub2(a,b);
        }
        else if (b[0] == '-') {
            b.erase(0,1); // minus 부호 삭제
            return sub2(a,b);
        }
    }

    i = a.length() - 1;
    j = b.length() - 1;

    // 각 자릿수 더하기
    while (i >= 0 || j >= 0 || carry != 0) {
        sum = carry;
        if (i >= 0) {
            sum += a[i--] - '0';
        }
        if (j >= 0) {
            sum += b[j--] - '0';
        }
        carry = sum / 10;
        sum %= 10;
        result = char('0' + sum) + result;
    }
    if (sign == 0) {
        result = '-' + result;
    }

    return result;
}