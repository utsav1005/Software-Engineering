//LAB EXERCISE 3: Word Count
//? Write a C program that counts the number of words in a sentence entered by the user.
//? Challenge: Modify the program to find the longest word in the sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longest[50];
    int len = 0, maxLen = 0, wordCount = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, 200, stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {        // I Love Programming
        if (sentence[i] != ' ' && sentence[i] != '\n') {//0123456789	
            len++;
            if (len > maxLen) {
                maxLen = len;           //i=5-4+1=2
                strncpy(longest, &sentence[i - len + 1], len);  //sentence[i-len+1]=start
//               
            }
        } else {
            if (len > 0) {
                wordCount++;
                len = 0;
            }
        }
    }

    // If sentence didn't end with space
    if (len > 0) wordCount++;

    printf("\nNumber of words: %d\n", wordCount);
    printf("Longest word: %s\n", longest);

    return 0;
}

