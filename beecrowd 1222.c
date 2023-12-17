#include<stdio.h>
#include<string.h>
int main()
{
   int n,l,c;
   while(scanf("%d %d %d",&n,&l,&c)!=EOF)
   {
       char word[n][100];
       for(int i = 0;i<n;i++)
       {
           scanf("%s%*c",word[i]);
       }
       int lc = 0;
       int line = 1;
       int page = 1;
       for(int i = 0;i<n;i++)
       {
           int len = strlen(word[i]);
           if(lc+len<=c)
           {
               lc = ((lc+len)+1);
           }
           else
           {
               lc = len+1;
               line++;
           }
           if(line>l)
           {
               page++;
               line = 1;
           }
       }
       printf("%d\n",page);
   }
    return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//  while (1) {
//    int N, L, C, character, line, page;
//
//    // Read the values for N (number of words), L (lines per page), and C (characters per line)
//    if (scanf("%d %d %d", &N, &L, &C) != 3) {
//      break; // Exit loop if input is invalid or EOF is encountered
//    }
//
//    // Assuming maximum word length is 100 characters and N is the number of words
//    char words[N][101];
//
//    // Read each word into the 'words' array
//    for (int i = 0; i < N; i++) {
//      scanf("%s", words[i]);
//    }
//
//    // Initialize variables for character count, line count, and page count
//    character = 0;
//    line = 1;
//    page = 1;
//
//    // Process each word in the 'words' array
//    for (int i = 0; i < N; i++) {
//      // Calculate the effective length of the word considering line breaks
//      int word_length = strlen(words[i]) + (character > 0);
//
//      // Check if adding the word to the line exceeds the character limit
//      if (character + word_length <= C) {
//        character += word_length; // Update character count for the line
//      } else {
//        character = strlen(words[i]); // Start a new line with the current word
//        line++; // Increment the line count
//
//        // Check if the line count exceeds the lines per page limit
//        if (line > L) {
//          page++; // Move to the next page
//          line = 1; // Reset line count for the new page
//        }
//      }
//    }
//
//    // Print the total number of pages required to print the text
//    printf("%d\n", page);
//  }
//
//  return 0;
//}
//
