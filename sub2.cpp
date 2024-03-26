#include <iostream>
#include <string>


void swap(std::string *a, std::string *b);
std::string sum2(std::string a, std::string b);

/**
 * @brief 두 숫자를 빼는 함수
 * @param a, b 뺄 두 숫자 (string)
 * @return result 반환할 두 숫자의 차 (string)
 */
std::string sub2(std::string a, std::string b) {
    
    std::string result = ""; // 정답 string
    int sub; // 각 자리수의 차를 임시로 저장
    int borrow = 0; // 올림
    int sign = 1; // 부호, 1이면 plus 0이면 minus
    int i,j; // 각각 a와 b의 길이
    std::string temp; // a와 b swap

    if (a[0] == '-' && b[0] == '-') {
        sign = 0;
        a.erase(0,1); // minus 부호 삭제
        b.erase(0,1); // minus 부호 삭제
        swap(a,b);
        return sub2(a,b);
    }
    else if (a[0] == '-' || b[0] == '-') {
        if (a[0] == '-') {
            b = '-' + b; // minus 부호 추가
            return sum2(a,b);
        }
        else if (b[0] == '-') {
            b.erase(0,1); // minus 부호 삭제
            return sum2(a,b);
        }
    }
    else {
        for (int k=0; k < a.size(); k++) {
            if (a.size() > b.size()) break;
            else if (a.size() < b.size()) {
                swap(a,b);
                sign = 0;
                break;
            } else {
                if (a[k] > b[k]) break;
                else if (a[k] < b[k]) {
                    swap(a,b);
                    sign = 0;
                    break;
                }
            }
        }
    }

    i = a.length() - 1;
    j = b.length() - 1;
    
    // 각 자릿수 빼기
    while (i >= 0 || j >= 0 || borrow != 0) {
        sub = borrow;
        if (i >= 0) {
            sub += a[i--] - '0';
        }
        if (j >= 0) {
            sub -= b[j--] - '0';
        }
        if (sub < 0) {
            borrow = -1;
            sub += 10;
        } else {
            borrow = 0;
        }
        result = char('0' + sub) + result;
    }
    
    while (result[0] == '0' && result.size() > 1) {
        result.erase(0,1);
    }

    if (sign == 0) {
        result = '-' + result;
    }

    return result;
}