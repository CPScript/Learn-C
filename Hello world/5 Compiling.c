# At this point, we have run our code within Codecademy’s learning environment. While this is how most of the exercises will go it is important to learn about running your code using a compiler.
# The compiler is the program that converts your code to an executable program that can be run on your computer. This involves reading the code from a file and compiling it into code the computer processor can run.
# A widely used C Compiler is gcc, which stands for GNU Compiler Collection. Let’s look at how we can compile helloWorld.c to the helloWorld executable.

// helloWorld.c
#include <stdio.h>
 
int main() {
  // output a line
  printf("Hello World!\n");
}

# To compile this code we need to run the following command in a terminal:
# gcc helloWorld.c -o helloWorld
# The above command can be broken up into 3 pieces:

* gcc is how we run the compiler application.
* helloWorld.c is the filename of our code to be compiled.
* -o helloWorld is an optional but common addition to the command. It tells gcc to output the program executable under the name helloWorld. If this is left out, the executable file will be called a.out.
# After running the command we have an executable, but how do we run our code? We can run the executable with the following command, again using the terminal:
./helloWorld


# This command tells the computer to look in the current directory and run helloWorld.
# Move on to try this out for yourself.



#include <stdio.h>

int main() {
  // output a line
  printf("Hello World!\n");
}
