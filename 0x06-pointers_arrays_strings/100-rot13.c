char *rot13(char *str) {
    char *result = malloc(strlen(str) + 1);
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            j = str[i] - 'a';
            j = (j + 13) % 26;
            result[i] = j + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            j = str[i] - 'A';
            j = (j + 13) % 26;
            result[i] = j + 'A';
        } else {
            result[i] = str[i];
        }
    }
    result[i] = '\0';
    return result;
}

