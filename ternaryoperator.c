#include <stdio.h>

int main() {
  int age;

  // take input from users
  printf("Enter your age: ");
  scanf("%d", &age);

  // ternary operator to find if a person can vote or not
  (age >= 18) ? printf("graduating") : printf("schooling");

  return 0;
}
