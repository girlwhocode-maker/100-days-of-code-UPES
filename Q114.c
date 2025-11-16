#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);   // input string

    int lastIndex[256];  
    // to store last seen index of every character
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int left = 0, maxLen = 0;

    for(int right = 0; s[right] != '\0'; right++) {
        // if character already seen and inside current window
        if(lastIndex[(unsigned char)s[right]] >= left) {
            left = lastIndex[(unsigned char)s[right]] + 1;
        }

        // update last seen position
        lastIndex[(unsigned char)s[right]] = right;

        // update maximum window size
        int currLen = right - left + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);

    return 0;
}

