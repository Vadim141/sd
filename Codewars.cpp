#include <iostream>
#include <vector>

int flip_bit(int value, size_t index);

int main() {
    std::vector<int> V, I;
    int N;
    std::cin >> N;
    int a;
    for (int i = 0; i < N; i++)
    {
        std::cin >> a;
        V.push_back(a);
    }
    I = two_oldest_ages(V);
    for (auto now : I)
    {
        std::cout << now << " ";
    }
    return 0;
}

int flip_bit(int value, size_t index) {
    return 0;
}
//79 71 3 95 93 19 51 53 89 97