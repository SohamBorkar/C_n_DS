#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp[100];
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
}

int main() {
  int n;
  printf("Enter number of strings: ");
  scanf("%d", &n);

  char str[n][100];
  for (int i = 0; i < n; i++) {
    printf("Enter string %d: ", i + 1);
    scanf("%s", str[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strlen(str[j]) > strlen(str[j + 1])) {
        swap(str[j], str[j + 1]);
      }
    }
  }

  printf("{");
  int num_of_comb = 3;
  for (int t = 0; t < n; t++) {
    printf("%s", str[t]);
    if (t == num_of_comb)
            printf("");

        else
            printf(", ");
  }
  printf("} \n");

  return 0;
}
