void fizzbuzz(int a) {
    if (a <= 0)
        printf("no");
    else {
        if (a % 3 == 0) printf("fizz");
        if (a % 5 == 0) printf("buzz");
    }
}