# Great work getting through these first exercises! Let’s review what was covered:
* C has been around for a while but is still very popular
* Code syntax is a set of rules that are followed when writing code so the program is able to compile
* Errors occur when the syntax is incorrect
* Error messages make a best effort to describe the error and where it occurred
* Use printf() to output text to the console
* Comments are used to include text in code that the compiler will ignore
* Line comments start with // and block comments are surrounded by /* */
* The gcc application, or GNU Compiler Collection is a compiler used to compile C programs

QUIZ:
1.Which line of code will NOT result in an error?
a: printf("Hello, World!");
b: printf "Hello, World!";
c: printf("Hello, WOrld!")
  
  CORRECT ANSWER: A = printf("Hello, World!");


2.What information would an error message probably not supply.
a: The line number of the error
b: A Corrected line of code
c: The file the error occured in
d: A dicription of the error
   
   CORRECT ANSWER: B = A corrected line of code
   
3.Given a code file called quiz.c, which command would compile the code into an executable named quiz.
a: gcc quiz.c quiz
b: gcc quiz.c -o quiz
c: gcc quiz.c
d: gcc quiz -o quiz.c
    
    CORRECT ANSWER: B = gcc quiz.c -o quiz
    
4:Finish the code block below to output the following text:
I CAN NOT WHITE THIS ONE :(
  
5:In the code below, complete the comments with the proper syntax.

int main(void) {
     //   Happy to be a line comment
  printf("Line comments are great!\n");
  
       /*   As a block comment I enjoy
  being able to span multiple lines 
  to describe some code      */ 
  printf("Block comments are cool too");
}
