#include <iostream>
#include <string>

int main() {
    std::string S, A, B;
    // 读取输入
    std::getline(std::cin, S);
    std::getline(std::cin, A);
    std::getline(std::cin, B);
    
    size_t pos = 0;
    while ((pos = S.find(A, pos)) != std::string::npos) {
        S.replace(pos, A.length(), B);
        pos += B.length(); // 移动位置以避免无限循环
    }
    
    // 输出结果
    std::cout << S << std::endl;
    return 0;
}
