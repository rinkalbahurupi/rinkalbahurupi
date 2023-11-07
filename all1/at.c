#include <stdio.h>
#include <string.h>

int expandAroundCenter(char *s, int left, int right) {
    int len = strlen(s);
    
    while (left >= 0 && right < len && s[left] == s[right]) {
        left--;
        right++;
    }
    
    return right - left - 1;
}

int maxLengthPalindromeSubstring(char *s) {
    int len = strlen(s);
    int start = 0;
    int end = 0;
    
    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(s, i, i);  // For odd length palindrome
        int len2 = expandAroundCenter(s, i, i + 1);  // For even length palindrome
        int maxLength = len1 > len2 ? len1 : len2;
        
        if (maxLength > end - start) {
            start = i - (maxLength - 1) / 2;
            end = i + maxLength / 2;
        }
    }
    
    // Print the longest palindrome substring
    printf("Longest Palindrome Substring: ");
    for (int i = start; i <= end; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    
    return end - start + 1;
}

int main() {
    char s[] = "babad";  // Example input
    int maxLength = maxLengthPalindromeSubstring(s);
    
    printf("Maximum Length of Palindrome Substring: %d\n", maxLength);
    
    return 0;
}

