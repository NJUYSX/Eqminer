#include"Struct.h" 

vector <Input*> input_vector;//vector of inputs
vector <Output*> output_vector;//vector of outputs
vector <Stdin_format*> stdin_vector;//vector of Stdin_formats
 vector <Judgement*> judgement_vector;//vector of Stdin_formats

string input_path;              //path of input directory
string curdir_path;             //path of current directory 
string curdir_name;             //name of current directory
string curfile_absolute_path;   //absolute path of current file
string curfile_relative_path;   //relative path of current file
string curfile_name;            //name of current file