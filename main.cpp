#include <iostream>

int main() {
    // Устанавливаем локаль, чтобы русский текст корректно отображался в консоли Windows
    setlocale(LC_ALL, "Russian");

    std::cout << "Привет! Это моё первое консольное приложение." << std::endl;
    
    int a = 5;
    int b = 7;
    int sum = a + b;

    std::cout << "Я умею считать: " << a << " + " << b << " = " << sum << std::endl;

    std::cout << "\nНажми Enter, чтобы выйти...";
    
    // Эта строка нужна, чтобы окно консоли не закрылось мгновенно после выполнения
    std::cin.get(); 

    return 0;
}
