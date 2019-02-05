/*These function update the count of files and content in respective txt files*/
update_no_of_files()
        {
            ofstream savior1;
            savior1.open("numbers_of_files.txt");
            savior1<<no_of_files;
            savior1.close();
        }


update_nomen()
        {
            create_remainder(nomen+1);
            ofstream savior2;
            savior2.open("nomenclature.txt");
            savior2<<nomen;
            savior2.close();


}

