#include <iostream>
#include <vector>

int main() 
{
    int m, n;
    std::cout << "Enter the number of rows (m): ";
    std::cin >> m;
    std::cout << "Enter the number of columns (n): ";
    std::cin >> n;

    std::vector<std::vector<int>> array(m, std::vector<int>(n));

    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            array[i][j] = i * j;
        }
    }
    std::cout << "Generated Array:\n";

    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
