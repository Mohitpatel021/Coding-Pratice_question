#include<stdio.h>
int main(){
    int a=34;
    int *ptr=&a;
    a=a+2;
    printf("%d\n",a);
    printf("%d\n",ptr);
    // if we use "PTR+1" if increase the address of PTR with the size of"INT"
    //Example-6422296+4(size of (int))
    //{Size of int=4}
    //        6422300

    printf("%d\n",ptr+1);

    printf("%d",ptr+2);
    return 0;

}