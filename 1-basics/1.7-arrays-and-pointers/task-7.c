int is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int string_count(char* str) {
    int res = 0;
    for (char* cur = str; *cur != 0; cur = cur + 1) {
        res++;
    }
    return res;
}

int string_words(char* str) {
    int res = 0;
    for (char *cur = str, *prev = NULL; *cur != 0;
         cur = cur + 1, prev = cur - 1) {
        if (!is_whitespace(*cur) && (prev == NULL || is_whitespace(*prev))) {
            res++;
        }
    }
    return res;
}