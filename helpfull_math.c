#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int n= strlen(str);
    char temp;
    for (int i = 0; i < n-1; i+=2) {
      for (int j = i+2; j < n; j+=2) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }

    printf("%s\n", str);

    return 0;
}
