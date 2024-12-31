#include <stdio.h>
#include "functions.h"
#include <string.h>
//logic hàm
void startProgram(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\tCHOOSE YOUR ROLE\n");
	printf("================================\n");
	printf("[1] Admin\n");
	printf("[2] Student\n");
	printf("[3] Teacher\n");
	printf("[0] Exit The Program\n");
	printf("================================\n");
}

//void login(){
//	char email[16];
//	char password[9];
//	do{
//		printf("\n***Student Management System Using C***\n\n");
//		printf("\t    LOGIN\n");
//		printf("\n================================\n");
//		fflush(stdin);
//		printf("Email: ");
//		fgets(email, sizeof(email), stdin);
//		email[strcspn(email, "\n")] = '\0';
//		fflush(stdin);
//		printf("Password: ");
//		fgets(password, sizeof(password), stdin);
//		password[strcspn(password, "\n")] = '\0';
//		if(strcmp(password,"password")!=0 || strcmp(email,"chien@gmail.com")!=0){
//			printf("\n*wrong Email Or Password! Please Try Again*\n");
//		}
//	}while(strcmp(password,"password")!=0 || strcmp(email,"chien@gmail.com")!=0);
//}

void menuAdmin(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\t     MENU\n");
	printf("================================\n");
	printf("[1] Students Mangement\n");
	printf("[2] Classrooms Management\n");
	printf("[3] Teachers Management\n");
	printf("[0] Back\n");
	printf("================================\n");
}

void studentMenu(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\t STUDENT MENU\n");
	printf("================================\n");
	printf("[1] Add A New Student\n");
	printf("[2] Show All Students\n");
	printf("[3] Search A Student\n");
	printf("[4] Edit A Student\n");
	printf("[0] Back\n");
	printf("================================\n");
}

void inputStudent(Student student[], int *length){
	printf("\n\t***Add A New Student***\n\n");
	getchar();
	student[*length].studentId=*length + 1;
	printf("StudentClassroomId: ");
	fgets(student[*length].classroomId,5,stdin);
	student[*length].classroomId[strcspn(student[*length].classroomId,"\n")]='\0';
	printf("StudentName: ");
	fgets(student[*length].name,30,stdin);
	student[*length].name[strcspn(student[*length].name,"\n")]='\0';
	printf("StudentEmail: ");
	fgets(student[*length].email,35,stdin);
	student[*length].email[strcspn(student[*length].email,"\n")]='\0';
	printf("StudentPhone: ");
	fgets(student[*length].phoneNumber,15,stdin);
	student[*length].phoneNumber[strcspn(student[*length].phoneNumber,"\n")]='\0';
	printf("\n*Student Added Successfully*\n"); 
	(*length)++;
}

void printStudent(Student student[], int length){
	printf("\n\t\t\t\t\t**ALL STUDENTS**\n\n");
	printf("|=======|========================|==============|============================|==================|\n");
	printf("|  ID   |         Name           | classroomId  |           Email            |     PhoneNumber  |\n");
	printf("|=======|========================|==============|============================|==================|\n");
	for(int i=0; i<length; i++){
		printf("| %-5d | %-22s | %-12s | %-26s | %-16s |\n", 
		student[i].studentId,
		student[i].name,
		student[i].classroomId,
		student[i].email,
		student[i].phoneNumber);
		printf("|=======|========================|==============|============================|==================|\n");
	}
}
