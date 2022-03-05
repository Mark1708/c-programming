int discriminant(int a, int b, int c) {
    return b * b - 4 * a * c;
}

int root_count(int a, int b, int c) {
    int D = discriminant(a, b, c);
    if (D > 0)
        return 2;
    else if (D == 0)
        return 1;
    else
        return 0;
}

int main() {
    // Считайте три числа в локальные переменные (см. предыдущий шаг)
    int input1 = read_int();
    int input2 = read_int();
    int input3 = read_int();

    // выведите результат запуска root_count с аргументами a, b и c.
    printf("%d", root_count(input1, input2, input3));

    return 0;
}