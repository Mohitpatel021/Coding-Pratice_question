/*
#include<iostream>
using namespace std;
int main(){//...........half pyramid of *.........
    int n=5;
    for(int i=1;i<=5;i++){
       for(int j=1;j<=i;j++){
            cout<<"*";
        }
   cout<<endl; }
    return 0;
}

*/

/*
#include<stdio.h>
int main(){//........half pyramid using user input in .....
    
    int rows;
    printf("enter the number of rows ");
    scanf("%d",&rows );
    for(int i=1;i<=rows;i++){
        for( int j=1;j<=i;j++){
            printf("*");

        }printf("\n");

    }
return 0;
}
*/



#include<iostream>
using namespace std;
int main(){//........half inverted pyramid of *.......
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }cout<<endl;

    }
    return 0;
}


/*
#include<stdio.h>
int main(){//.......half inverted pyramid using user input in form of rows..........
    int rows;
printf("enter the number of rows");
scanf("%d",&rows);
for(int i=rows;i>=1;--i){
    for(int j=1;j<=i;++j){
        printf("*");

    }printf("\n");
}
    return 0;
}*/