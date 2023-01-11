# When writing in C, we need to follow a set of rules in order for the code to run properly. These rules are known as syntax.
# As we go through each lesson we will learn new syntax on the topics being covered.
# Let’s look at the Hello World code to examine common syntax that will exist in most (if not all) of your programs.

#include <stdio.h>

int Main() {
  // output a line
  printf("Hello World!\n")
}


# it will put "down below" into the console
# FIX THE HELLO WROLD CODE ABOVE

#"ERROR"
script.c: In function ‘Main’:
script.c:6:1: error: expected ‘;’ before ‘}’ token
 }
 ^
 
 #"Fixed"
 
 #include <stdio.h>
 
int main() {
  // output a line
  printf("Hello World!\n");
}
 
