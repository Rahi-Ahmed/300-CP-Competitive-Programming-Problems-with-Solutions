#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parse(char binaryNum[]);
void get2Complement(char *num1, char *num2, char *result);
void Add(char *num1, char *num2, char *result);



int main() {
    char num1[9];
    char num2[9];
    char result[9];
    char op[2];

    printf("<Binary1> <+/-> <Binary2>: ");
    scanf("%s %s %s", &num1, &op, &num2);
    int num1_len = strlen(num1);
    int num2_len = strlen(num1);

    if (num1_len != 8) {
        int zeros_to_add = 8 - num1_len;
        char padded_num[9]; // Assuming a maximum length of 8 bits + 1 for the null terminator

        // Fill in the padded_num with leading zeros
        for (int i = 0; i < zeros_to_add; ++i) {
            padded_num[i] = '0';
        }

        // Append the original binary number
        strcpy(padded_num + zeros_to_add, num1);

        // Update num1 with the padded number
        strcpy(num1, padded_num);
    }

    if (num2_len != 8) {
        int zeros_to_add = 8 - num2_len;
        char padded_num[9]; // Assuming a maximum length of 8 bits + 1 for the null terminator

        // Fill in the padded_num with leading zeros
        for (int i = 0; i < zeros_to_add; ++i) {
            padded_num[i] = '0';
        }

        // Append the original binary number
        strcpy(padded_num + zeros_to_add, num2);

        // Update num2 with the padded number
        strcpy(num2, padded_num);
    }

    if(parse(num1) != 1 || parse(num2) != 1){
        //printf("Invalid binary number\n");
        return EXIT_FAILURE;
    }

    if(op[0] == '+'){
        Add(num1, num2, result);
        printf("%s + %s = %s\n", num1, num2, result);}
    else if(op[0] == '-'){
        get2Complement(num1, num2, result);
        printf("%s - %s = %s\n", num1, num2, result);
    }
    else{
        printf("Invalid operator. Please input '+' or '-'\n");
    }

    return 0;
}

void Add(char *num1, char *num2, char *result) {
    int carry = 0;

    for (int i = 7; i >= 0; i--) {
        int bit_num1 = num1[i] - '0';
        int bit_num2 = num2[i] - '0';
        int sum = bit_num1 + bit_num2 + carry;
        result[i] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry > 0) {
        printf("Binary addition overflow.\n");
        exit(EXIT_FAILURE);
    }
}

void get2Complement(char *num1, char *num2, char *result) {
    int br = 0; // borrow
    for (int i = 7; i >= 0; i--) {
        int bit_num1 = num1[i] - '0';
        int bit_num2 = num2[i] - '0';

        bit_num1 -= br;

        if (bit_num1 < bit_num2) {
            bit_num1 += 2;
            br = 1;
        } else {
            br = 0;
        }

        result[i] = (bit_num1 - bit_num2) + '0';
    }

    if (br > 0) {
        printf("Binary subtraction underflow.\n");
        exit(EXIT_FAILURE);
    }

}

int parse(char binaryNum[]){
    for(int i = 0; i < 8; i++){
        if(binaryNum[i] == '1' || binaryNum[i] == '0'){

        }
        else{
            printf("Illegal character in binary string.");
            return 0;
        }
    }
    return 1;

}
