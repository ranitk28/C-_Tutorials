/* The below line is processed by preprocessor as it starts with # , 
preprocessor is a programe called by compiler to preprocess the 
code and gengerate the another file with no # */

#include<iostream>

/* This is the namespace declaration for std to make compiler know 
that all input output functions belong to std class without 
explicitly using :: operator with std as std:: */
   
using namespace std;

/* This is the function from which actual execution starts by the system 
, System calls main() from the source at the execution time , the return type
has to be int as there should be some way to tell the system that the execution has completed succesfully
and according to ISO Standard the return type of main() should be int , 
the  */
/* Note that neither ISO C++ nor C99 allow you leave type out of declaration ie in conrast of c89 and ARM C++ 
int is not assumed by default where type is missing in declaration */

int main(int argc , char *argv[])
{
        /* this fuction tells the compiler to display the text on screen of standard output,
           in linux standard output is by default text terminal where the shell is running */ 
	
           cout << "Hello World";
         
        /* this is the which returns some value to the calling system , its not compulsory to write explicitly write 
           return statement in C++ */ 

        //	return 0;
}
