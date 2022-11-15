#include"Judgement.h"
using namespace std;
int main() {
    cout << "请输入您的文件夹路径" << endl;
    cin >> input_path;
    DIR* input_dir = opendir(input_path.c_str());
    if (input_dir == NULL) {
        cout << "Fail to open INPUT file directory!" << endl;
    }
    else {
        dirent* curdir;
        while ((curdir = readdir(input_dir)) != NULL) {
            curdir_name = curdir->d_name;
            if (curdir_name != ".vscode" && curdir_name != "." && curdir_name != "..") {

                curdir_path = input_path + "/" + curdir_name;
                generate_input();
                generate_stdin_format();

                runJudgement();

                input_vector.clear();
                stdin_vector.clear();
            }
        }
        closedir(input_dir);
    }

    //output results into equal/inequal.csv
    Modifyfile();
    return 0;
}