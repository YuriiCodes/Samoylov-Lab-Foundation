#include <iostream>
#include <fstream>
using namespace std;

#include "MatrixDeclaration.cpp"


/*Solve the problem with the help of a class for processing integer matrices. The matrix is depicted
dynamic data structure with pointers.
The object contains hidden attributes: a pointer to the first element of a dynamic array
pointers, number of rows, number of columns. Each pointer in the array is set to
the first element of a dynamic numerical array that represents a row of matrices

 Class methods:
- standard designer (without parameters),
- displacement designer,
- a constructor with two integer parameters is the number of rows and the number of columns
matrix,
- method of assignment by movement,
- destructor,
- method of access to the matrix element by a pair of its indices,
- possibly (depending on the option), the method of deleting the matrix row with the specified number,
- possibly (depending on the option), the method of deleting the matrix column with the specified number.



 Performance requirements
1. Implement the program with a project that includes five files. In the first h-file
write declarations of the class of matrices, in the cpp-file of the same name - methods of this class. IN
the second h-file to write the headers of the functions of working with matrices, in the eponymous cpp-file -
implementation of functions. Write the main function and other unrelated functions in the main file
matrix processing (obtaining the path to the file, output data about the task, option number
and the author of the program).
2. The dimensions of the matrix are within N by N, where N = 300.
3. The program must have functions for subtasks:
- display a message containing the group, name and surname of the student, the title of the work,
option number and problem formulation in it;
- get from the user the path to the file and return it;
- enter data into the matrix from the file using a stream of type ifstream;
- process the matrix;
- depending on the task, display the results of matrix processing on the screen, display the matrix in
file using a stream of typestream.
4. The main function calls the functions of displaying the message about the title of the work and its executor,
getting the path to the file, entering data from the file, processing the matrix, outputting results
processing
 5. Before entering from the file and outputting to the file, the program asks for the path to the file. User
lead the way. If the user specified an empty path to the input file, then the data
are entered from the in.txt file, and if to the output file, the data is output to the out.txt file.
6. In case of failure to open the thread to work with the file, the path is queried and entered
repeatedly.
7. The input file must ensure that the first line contains the dimensions of the matrix - two integers
numbers n and m, both in the range from 3 to N, the next n lines contain m integers or real
(depending on the option) numbers.

 8. The input function has a parameter that represents the input stream and returns an object of the matrix class.
The returned object is either assigned to or after the object specified in the main function
the object in the main function is initialized
both cases).
9. If the introduction of the matrix is unsuccessful, ie the matrix is left completely empty or
in part, the input function throws an exception. Exception handling is that program
displays a message of the form <<< path to the file: INPUT ERROR >>> and terminates.
10. The matrix class object has processing functions as a reference parameter.

 11. The output function parameters represent the matrix class object and the output stream.
12. If the result of processing is a matrix, it is output to a file other than the input, y
in the same form as in the input file, but with the alignment of the columns on the right edge. If
the result of the processing is one or more sequences of numbers, the result is displayed on the screen
a separate function. If the result of processing is a single number or several numbers, or text
message, the result is displayed on the screen.
13. The destructor must free memory from all dynamic data that represent the matrix.
14. The method of accessing the matrix element gets a pair of indexes and returns a reference to
the corresponding element of the corresponding numeric array (NOT the address of the element!).
15. The methods of the matrix class check whether the values of numbers and / or columns obtained by them are available
permissible, and if not, throw an exception. The exception handling is that
the program displays a message of the form <<< index: OUT OF RANGE >>> or view
<<< [index, index]: OUT OF RANGE >>> and ends.
16. Of the library classes, only the string type can be used.*/










/*Implement the matrix class that takes in template of data type and fullfills this code:
    MATRIX<int> M(2, 3);
    M.Print("M");

    // Fill the matrix via formula
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            M.SetMij(i, j, i + j);

    M.Print("M");

    MATRIX<int> M2 = M; // copy constructor
    M2.Print("M2");

    MATRIX<int> M3; // test for copy constructor
    M3 = M;
    M3.Print("M3");

    MATRIX<int> M4;
    M4 = M3 = M2 = M; // chain copy constructor
    M4.Print("M4");
    */


int main() {
    MATRIX<int> M(2, 3);
    M.Print("M");

    // Fill the matrix via formula
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            M.SetMij(i, j, i + j);

    M.Print("M");

    MATRIX<int> M2 = M; // copy constructor
    M2.Print("M2");

    MATRIX<int> M3; // test for copy constructor
    M3 = M;
    M3.Print("M3");

    MATRIX<int> M4;
    M4 = M3 = M2 = M; // chain copy constructor
    M4.Print("M4");

    return 0;
}
