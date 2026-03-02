#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  volatile char word_b[16] = {0};
  volatile char word_a[16] = {0};

  puts("Enter the first Word of Power: ");
  gets(word_a);
  puts("Enter the second Word of Power: ");
  // gets(word_b) // without the capacity to input the second Word,
                  // the party will never open the box!

  if (strcmp(word_a, "salvus") == 0 && strcmp(word_b, "silente") == 0) {
    puts("Opening the box! Here's your loot: ");
    system("cat flag.txt");
  } else {
    puts("The sigil stops glowing... Congrats, you bricked the seal.");
  }
  return 0;
}
