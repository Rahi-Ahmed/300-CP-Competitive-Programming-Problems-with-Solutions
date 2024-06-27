#include <stdio.h>
#include <string.h>

// extract_digits(in, out) extracts the digit characters appearing in the string 'in' and
//   updates 'out' to be a string containing those characters; it also returns the sum of
//   all the individual digits appearing in the string 'in'
// requires: 'in' is a valid string
//           'out' points to enough memory to hold the digits of 'in'
int extract_digits(const char in[], char out[]){
    int len = strlen(in);
    int a = 0, count = 0;

    for(int i = 0; i < len; i++){
        if(in[i] >= 48 && in[i] <= 57){
            out[a] = in[i];
            a++;
            count += in[i] - 48;
        }
    }

    out[a] = '\0';  // Add null terminator to 'out'

    return count;
}

int main(void) {
    char in[1000], out[1000];
    scanf("%s", in);
    int sum = extract_digits(in, out);
    printf("%s %d\n", out, sum);
}