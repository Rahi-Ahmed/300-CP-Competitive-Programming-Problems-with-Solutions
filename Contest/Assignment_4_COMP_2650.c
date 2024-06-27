#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int parseBinary(char *);
void add0sOR1s(char *, int);
void complement(char *);
char FullAdder(char A, char B, char C, char *S);
int AddSub(char *N1, char *N2, char C, char *R);

int main() {
    // Variables to store user input
    char binary1[101], binary2[101], operator;

    // Prompt user to enter binary numbers and operator
    printf("Enter first binary number: ");
    scanf("%s", binary1);
    printf("Enter operator (+ or -): ");
    scanf(" %c", &operator);
    printf("Enter second binary number: ");
    scanf("%s", binary2);

    // Parse binary numbers and check if they are valid
    int len1 = parseBinary(binary1);
    int len2 = parseBinary(binary2);

    // Determine the maximum length among the two binary numbers
    int maxLength = (len1 > len2) ? len1 : len2;

    // Add extra 0s or 1s to make both numbers of equal length
    add0sOR1s(binary1, maxLength);
    add0sOR1s(binary2, maxLength);

    // Complement the second number if the operator is subtraction
    if (operator == '-') {
        complement(binary2);
    }

    // Perform addition or subtraction
    char result[maxLength + 1];
    int carry = AddSub(binary1, binary2, (operator == '-') ? '1' : '0', result);

    // Print the result
    printf("Result: %s%s\n", (carry == '1') ? "1" : "", result);

    return 0;
}

// Function to check if the binary string contains only 1s and 0s
int parseBinary(char *binary) {
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            fprintf(stderr, "Error: Invalid binary number '%s'. Must contain only 1s and 0s.\n", binary);
            exit(EXIT_FAILURE);
        }
    }
    return len;
}

// Function to add extra 0s or 1s to make both binary strings of equal length
void add0sOR1s(char *binary, int maxLength) {
    int len = strlen(binary);
    int diff = maxLength - len;

    char temp[101];
    for (int i = 0; i < diff; i++) {
        temp[i] = (binary[0] == '0') ? '0' : '1';
    }
    strcpy(temp + diff, binary);
    strcpy(binary, temp);
}

// Function to obtain the 1's complement of a binary string
void complement(char *binary) {
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
}

// Function to perform full addition of three bits
char FullAdder(char A, char B, char C, char *S) {
    int sum = (A - '0') + (B - '0') + (C - '0');
    *S = sum % 2 + '0';
    return (sum / 2) + '0';
}

// Function to perform addition or subtraction of two binary numbers
int AddSub(char *N1, char *N2, char C, char *R) {
    int len = strlen(N1);
    char carry = C;
    for (int i = len - 1; i >= 0; i--) {
        carry = FullAdder(N1[i], N2[i], carry, &R[i]);
    }
    return carry;
}
