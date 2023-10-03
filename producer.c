#include<stdio.h>
void main()
{
    int buffer[10],bufsize,in,out,produce,consume,choice;
    out=0;
    bufsize=10;
    while(choice!=3)
    {
        printf("\n 1.Producer \t 2.Consumer \t 3.Exit");
        printf("\n Enter your Choice");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            if((in+1)%bufsize==out)
            {
                printf("\nThe buffer is full");
            }
            else
            { 
                printf("\nEnter the num: ");
                scanf("%d", &produce);
                buffer[in] = produce;
                in = (in+1)%bufsize;
            }
            break;;;
        case 2:
            if(in==out)
            {
                printf("\n The buffer is empty");
            }
            else
            {
                consume = buffer[out];
                printf("\n The consumed value is %d",consume);
                out=(out+1)%bufsize;                       
            }
            break;
        }
    }
}                 
