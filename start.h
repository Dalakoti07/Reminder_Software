
#include<fstream>
//#include"introduction.cpp"
start()
{
    ifstream ptr;
    ptr.open("numbers_of_files.txt",ios::in);
        if(ptr==NULL)
        INTRO();

}
