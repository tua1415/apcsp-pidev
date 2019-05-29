#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[30];
  char lastname[30];
  int age;
  int studentID;
};

void printStudent(struct Student* student) {
  printf("Student:\n");
  printf("Name: %s %s\n", student-> firstname, student-> lastname);
  printf("Age: %d\n", student-> age);
  printf("Student ID: %d\n", student -> studentID);
}

int main(){
  int numStudent;
  char strInput[256];
  printf("How many students do you want to enter: \n");
  fgets(strInput, 256, stdin);
  sscanf(strInput, "%d", &numStudent);
  struct Student student[numStudent];
  for (int i= 0; i< numStudent; i++) {
    printf("You are entering student number %d\n", i);
    printf("First Name: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%s", student[i].firstname);
    printf("Last Name: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%s", student[i].lastname);
    printf("Age: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%d", &student[i].age);
    printf("Student ID: ");
    fgets(strInput, 256, stdin);
    sscanf(strInput, "%d", &student[i].studentID);
  }
  for (int i= 0; i< numStudent; i++){
    printStudent(&student[i]);
  }
}
