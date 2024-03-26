#include <iostream>
#include <string>

std::string sum2(std::string a, std::string b);
std::string sub2(std::string a, std::string b);

/**
 * int 범위를 벗어나는 큰 숫자 두 개를 더하거나 빼는 프로그램
 * @author leebarang
 */
int main() {

    using namespace std;

    string a, b;
    cout << "First number   >> ";
    cin >> a;
    cout << "Second number  >> ";
    cin >> b;

    cout << "Sum:           >> " << sum2(a,b) << endl;
    cout << "Sub            >> " << sub2(a,b) << endl;

    return 0;
}