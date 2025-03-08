#include <stdio.h>

void person(){
    int age = 25;
    float height = 5.9;
    char grade = 'A';


    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
}




int main(){
    for(int i = 0; i<5;i++){
        printf("Hello World\n");
    }
    person();
    return 0;
}
