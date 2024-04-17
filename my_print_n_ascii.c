void print_char(char c);

void my_print_n_ascii(int howMany);

void my_print_n_ascii (int howmany){
    int a=howmany;
    if (a>127){
        return;
    }
    else {
        for (a; a<127 ; a=a+1);
    { 
        char c=a ;
    print_char (c);
    }
    }
}