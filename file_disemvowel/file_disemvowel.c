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
    __FILE__ userInput = fopen(userString)
     if ( == NULL)
    {
        return 0
    }
    return 1
}


int main(int argc, char *argv[]) {
    switch(argc) {
        case 0:
            FILE *inputFile = stdin;
            FILE *outputFile = stdout;
            break;
        case 1:
            FILE *inputFile = fopen(argv[0], "r");
            FILE *outputFile = stout;
            break;
        case 2:
            FILE *inputFile = fopen(argv[0], "r");
            FILE *outputFile = fopen(argv[1], "w");
            break;
        default:
            FILE *inputFile = stdin;
            FILE *outputFile = stdout;
            break;
    }
        // This sets these to `stdin` and `stdout` by default.
        // You then need to set them to user specified files when the user
        // provides files names as command line arguments.
        

    // Code that processes the command line arguments
    // and sets up inputFile and outputFile.

    disemvowel(inputFile, outputFile);

    return 0;
}
