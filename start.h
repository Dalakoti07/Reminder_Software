
#include<fstream>
/*This function is runned for the first time when ,app is launched for the first time in the present working directory*/
start()
{
    ifstream ptr;
    ptr.open("numbers_of_files.txt",ios::in);
        if(ptr==NULL)
        INTRO();

}
