#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
    bool vowel = false;

  //Use switch to test (lowercase'd) char against possible vowels
  switch(tolower(c)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowel = true;
      break;
    default :
      break;
  }
  return vowel;
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
    int i;
    int posInOutBuff = 0;
    int numberOfConsonants = 0;
    for(i = 0; i < num_chars; i++){
        if(!is_vowel(in_buf[i])) {
            out_buf[posInOutBuff] = in_buf[i];
            posInOutBuff++;
            numberOfConsonants++;
        }
    }
    return numberOfConsonants;
}

void disemvowel(FILE* inputFile, FILE* outputFile) {
    int readBytes = 69;
    int nonvowels;

    char* inputFileBuffer = calloc(BUF_SIZE, sizeof(char));
    char* outputFileBuffer = calloc(BUF_SIZE, sizeof(char));
    
    while (!readBytes == 0) {
        readBytes = fread(inputFileBuffer, sizeof(char), BUF_SIZE, inputFile); //Returns 0 at end of file, ending loop
        nonvowels = copy_non_vowels(readBytes, inputFileBuffer, outputFileBuffer);
        fwrite(outputFileBuffer, sizeof(char), nonvowels, outputFile);
    }

    free(inputFileBuffer);
    free(outputFileBuffer);
}


int main(int argc, char *argv[]) {
    FILE *inputFile = stdin;
    FILE *outputFile = stdout;
    switch(argc) {
        case 2:
            inputFile = fopen(argv[1], "r");
            break;
        case 3:
            inputFile = fopen(argv[1], "r");
            outputFile = fopen(argv[2], "w");
            break;
    }

    disemvowel(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
