int is_square(int square) {
    int i = 0;
    while (i <= square) {
        if (i * i == square) return 1;
        i++;
    }
    return 0;
}