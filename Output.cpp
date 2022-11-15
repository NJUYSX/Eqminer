#include"Output.h"

Output::Output(){}
Output::Output(pair<string, string>ProPair, bool flag):ProgramPair(ProPair),if_equal(flag) {}
void Output::set_ProgramPair(const string& ProgramA, const string& ProgramB) {
	ProgramPair = make_pair(ProgramA, ProgramB);
}
void Output::set_if_equal(const bool& flag) {
	if_equal = flag;
}

bool Output::get_if_equal() { return if_equal; }
pair<string, string> Output::get_ProgramPair() { return ProgramPair; }

void Modifyfile() {
    //equal
    fstream File_equal;
    File_equal.open("equal.csv", ios::out);
    File_equal << "file1" << ',' << "file2" << endl;

    //inequal
    fstream File_inequal;
    File_inequal.open("inequal.csv", ios::out);
    File_inequal << "file1" << ',' << "file2" << endl;

    for (int i = 0; i < output_vector.size(); ++i) {
        if (output_vector[i]->get_if_equal() == false) {
            //inequal
            File_inequal << output_vector[i]->get_ProgramPair().first << ',' << output_vector[i]->get_ProgramPair().second << endl;
        }
        else if (output_vector[i]->get_if_equal() == true) {
            //equal
            File_equal << output_vector[i]->get_ProgramPair().first << ',' << output_vector[i]->get_ProgramPair().second << endl;
        }
    }

    File_equal.close();
    File_inequal.close();
}