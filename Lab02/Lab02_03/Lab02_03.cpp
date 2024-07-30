#include <iostream>
#include <vector>
#include <algorithm>

void getMinCoins(int a) {
    
    std::vector<int> coins = { 1000, 500, 200, 100, 50, 10, 5, 1 };

    std::vector<int> result;

    for (int coin : coins) {
        while (a >= coin) {
            a -= coin;
            result.push_back(coin);
        }
    }

    std::cout << "Необходимое количество монет: " << result.size() << "\n";
    std::cout << "Монеты:\n";
    for (int coin : result) {
        std::cout << coin << "\n";
    }
}

int main() {
    system("chcp 1251");
    int a;
    std::cout << "Введите сумму монет: ";
    std::cin >> a;

    getMinCoins(a);

    return 0;
}

