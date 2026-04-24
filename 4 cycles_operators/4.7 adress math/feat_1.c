int main() {
    int a = 5, b = 7;
    double d = 2.0;
    int* ptr_a = &a;
    int* ptr_b = &b;

    // Попробуйте раскомментировать строки по одной:
    ptr_b++;          // OK
    ptr_a += 3;       // OK
    // ptr_a *= a;    // Ошибка компиляции (invalid operands to binary expression)
    // ptr_a -= d;    // Ошибка компиляции (cannot subtract floating point from pointer)
    
    return 0;
}