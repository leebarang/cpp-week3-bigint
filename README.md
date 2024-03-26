# BigInt 프로젝트
BigInt는 C++로 작성된 프로젝트로, 매우 큰 정수의 합과 차를 다루기 위한 기능을 제공합니다.
크기가 매우 큰 양수 뿐만 아니라, 0과 음수의 범위에서의 계산을 지원합니다.
이 프로젝트에는 main.cpp, sum2.cpp, min2.cpp, util.cpp 네 개의 파일이 포함되어 있습니다.

## 파일 구성
### main.cpp
* main(): 사용자 입력을 받고, sum2와 min2 함수를 호출하여 두 정수의 합과 차를 계산합니다.
### sum2.cpp
* sum2(string, string): 두 개의 문자열로 표현된 숫자를 더하는 함수를 구현합니다.
### min2.cpp
* min2(string, string): 두 개의 문자열을 빼는 함수를 구현합니다.
### util.cpp
* swap(string, string): 두 개의 문자열의 순서를 바꾸는 함수를 구현합니다.

## 실행 방법
프로젝트를 다운로드하고 소스 코드를 가져옵니다.
컴파일러가 C++11 이상을 지원하는지 확인합니다.

```
git clone https://github.com/leebarang/cpp-week3-bigint.git bigint
cd bigint

g++ -Weeror -c main.cpp sum2.cpp sub2.cpp util.cpp
g++ -o main.exe main.o sum2.o sub2.o util.o
./main.exe
```

## 실행 예시

First number   >> 12345678901234567890
Second number  >> 98765432198765432100
Sum:           >> 111111111099999999990
Sub            >> -86419753297530864210


## 주의사항
이 프로젝트는 매우 큰 정수를 다루기 위한 예제이며, 효율성은 고려되지 않았습니다. 따라서 실제로 매우 큰 숫자의 덧셈 및 뺄셈을 수행할 때 성능 문제가 발생할 수 있습니다.
입력 값이 숫자가 아닌 경우 예외 처리가 구현되어 있지 않으므로, 정수가 아닌 값이 입력되지 않도록 주의해야 합니다.
