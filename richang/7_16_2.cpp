#include <iostream>
#include <iomanip>

int main() {
    int n;
    double q = 0.0;

    std::cin >> n;

    if (n <= 0) {
        std::cerr << "输入必须是一个大于0的整数。" << std::endl;
        return 1;
    }

    for(int i = 1; i <= n; ++i){
        q += 1.0 / (i * (i + 1));
    }

    std::cout << std::fixed << std::setprecision(6) << q << std::endl;

    return 0;
}
