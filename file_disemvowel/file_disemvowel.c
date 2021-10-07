#include <stdio.h>
#include <stdbool.h>

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
    /*
     * Copy all the non-vowels from in_buf to out_buf.
     * num_chars indicates how many characters are in in_buf,
     * and this function should return the number of non-vowels that
     * that were copied over.
     */
}

void disemvowel(FILE* inputFile, FILE* outputFile) {
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, 
     * and use fread() to repeatedly read in a buffer of data, 
     * copy the non-vowels to the output buffer,
     * and use fwrite to write that out.
     */
    char buffer[BUF_SIZE];
    switch(argc) {
        case 1:
            printf("Enter string(s) to be disemvoweled: ");
            FILE *inputFile = fread(buffer, sizeof(char), BUF_SIZE, stdin);
            FILE *outputFile = fwrite(buffer, sizeof(char), BUF_SIZE, stdout);
            break;
        case 2:
            FILE *inputFile = fread(buffer, sizeof(char), BUF_SIZE, fopen(argv[1], "r"));
            FILE *outputFile = fwrite(buffer, sizeof(char), BUF_SIZE, stdout);
            break;
        case 3:
            FILE *inputFile = fread(buffer, sizeof(char), BUF_SIZE, fopen(argv[1], "r"));
            FILE *outputFile = fwrite(buffer, sizeof(char), BUF_SIZE, fopen(argv[2], "w"));
            break;
    }
    
     if ( == NULL)
    {
        //process a string
    }
    //process as file
}


int main(int argc, char *argv[]) {
    FILE *inputFile = stdin;
    FILE *outputFile = stdout;
    char buffer[BUF_SIZE];
    switch(argc) {
        case 2:
            FILE inputFile = fopen(argv[1], "r");
            break;
        case 3:
            FILE inputFile = fopen(argv[1], "r");
            FILE outputFile = fopen(argv[2], "w");
            break;
    }

    disemvowel(inputFile, outputFile);

    return 0;
}
