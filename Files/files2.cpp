/* Writes and read alpharethetic and integers from a file */

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int constexpr N = 10;
    fstream filestr;
    string buffer;
    int i=0;
    string names[N]={"Nikos","Maria","Petros","Sofia","Kostas","Dimitra","Giorgos","Christos","Anna","Apostolis"};
    int grades[N]={55,30,70,80,10,25,75,90,100,30};
    filestr.open("data_student_struct10.txt",ios::out);
    if(!filestr.is_open()){
        cerr<< "File not found" << endl;
        exit(-1);
    }
    for(i=0; i<N; i++){
        filestr<< names[i]<<"\t"<<grades[i]<<endl;
    }
    filestr.open("data_student_struct10.txt");
        if(!filestr.is_open()){
            cerr<<"File not found"<<endl;
             exit(-1);
        }
    string name;
    int grade;
    while(getline(filestr,buffer)){
        stringstream ss(buffer);
        ss >> name;
        ss >> grade;
        cout << name << " " << setprecision(1)<<fixed<<static_cast<double>(grade)/10.0 << endl;
    }
    filestr.close();
    return 0;
}
