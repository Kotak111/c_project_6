#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;
    int freq[256] = {0};  
    
    printf("Enter a string: ");
    scanf("%s", str);

   
    while (str[length] != '\0') {
        freq[(int)str[length]]++;  
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;  
            break;
        }
    }

  
    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
