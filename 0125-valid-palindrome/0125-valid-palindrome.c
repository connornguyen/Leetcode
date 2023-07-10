bool isPalindrome(char* s) {
    int k = strlen(s);
    if (k == 1) {
        return true;
    }

    int i, j;
    for (i = 0, j = 0; i < k; i++) {
        if (isalnum(s[i])) {
            s[j] = tolower(s[i]);
            j++;
        }
    }
    s[j] = '\0'; // Add null terminator, sau khi modify xong thi phai add

    for (i = 0, j = j - 1; i < j; i++, j--) {
        while (i < j && !isalnum(s[i])) {
            i++;
        }
        while (i < j && !isalnum(s[j])) {
            j--;
        }
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}







