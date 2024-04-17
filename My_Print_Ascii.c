void print_char(char c);

void my_print_ascii(void);


int main(void)
{
my_print_ascii();
return 0;
}

void my_print_ascii (void) 
{
    for (int a=33; a<127 ; a=a+1){
        char c=a ;
    print_char (c) ;
    }
    
}

