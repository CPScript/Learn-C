#The main goal of our Hello World code example is to output the text "Hello World!" to the console. The line of code that outputs text is:
printf("Hello World!\n");


#let’s dive deeper into the 2 parts of this line are:

#"" printf()""  is known as a function and performs the action of printing text to the console.
#"" "Hello World!\n" "" is a string. A string is text in between a pair of double quotes.
#Placing the string in between the parentheses of the printf() function prints the text (without the quotes) to the console.

#Functions and strings are topics covered in later lessons. Don’t worry if you don’t understand the concepts fully. The important thing to note is that this is how we create output in the console.
#What about the \n at the end of the string? Good question! This is called an escape sequence and is used to add a non-visual character within a string.
#In this case, \n adds a new line to the end of the string. Look what happens when we place it in between Hello and World!:
printf("Hello\nWorld!");

The above code will output:
"" Hello ""
"" World! ""

#It’s important to remember an escape sequence is a character and must be within the double-quotes.
#Another escape sequence is \t. This is equivalent to the tab key and will insert spaces within a string:
printf("Hello\tWorld!");

#The above code will output:
Hello     World!

#Try it on your own


#Note from CPS
# TOOK ME FOREVER TO FIGUR OUT

#include <stdio.h>

int main() {
  // Simple Recipe
  printf("\n2/3 Cups: Granulated Sugar");
  printf("2 Cups: All Purpose Flour\n");
  printf("1 Cups: Unsalted Butter\t(Room Temperature)");
  
}
