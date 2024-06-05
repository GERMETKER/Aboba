#include <iostream>
#include <Windows.h>
void Print(int a)
{
    std::cout << a;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /* int sym[3][4];
    int sum[4][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sym[i][j] = 1 + rand() % 100;
            std::cout << sym[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n------------------------------------------\n\n\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 2; j > -1; j--)
        {
            sum[i][j] = sym[j][i];
            std::cout << sum[i][j] << " ";
        }
        std::cout << "\n";
    }*/
    //!!!!std::stoi(строка) - преобразование std::string в int
    //
    static void (*print)(int a);
    print = Print;
    print(1);
    
    
    return 0;
}