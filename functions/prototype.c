 #include<stdio.h>
 int main()
{
    void india();      // prototype 
    india();               // calling india  // 1
    return 0;    //10
}
void india()
{
    printf("You are in India\n");      // 2
    void australia();        
    australia();        // calling australia   // 3
    return;      //9
}
void australia()
{
    printf("You are in Australia\n");     // 4
    void england();
    england();              // calling england  // 5
    return;      //8
}

void england()
{
    printf("You are in England\n");      // 6
    return;     //7
}

