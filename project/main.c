#include <stdio.h>
#include <string.h>

// Structure to hold student information
struct students {
    char firstName[30];
    char lastName[30];
    char email[50];
    char course[30];
    int rollNumber;
    int age;
    long mobileNumber;
    int isDeleted;
};

// Global array to store students.
struct students student[50];

// Global integer to keep track of 
// number of students and their roll numbers.
int studentCount = 1;

void studentData(char firstName[30], char lastName[30], char email[50], int rollNumber, int age, long mobileNumber, char course[30]) {
    if (studentCount < 50) {
        strcpy(student[studentCount].firstName, firstName);
        strcpy(student[studentCount].lastName, lastName);
        strcpy(student[studentCount].email, email);
        strcpy(student[studentCount].course, course);
        student[studentCount].rollNumber = rollNumber;
        student[studentCount].age = age;
        student[studentCount].mobileNumber = mobileNumber;
        studentCount++;
        printf("\nStudent successfully registered!\n");
    } else {
        printf("STUDENT LIMIT EXCEEDED\n");
    }
}

void addStudent() {
    char firstName[30];
    char lastName[30];
    char email[50];
    char course[30];
    int age;
    long mobileNumber;

    int choice = 1,opt;
    printf("\n");

    while (choice != 0 && studentCount <= 50) {
        printf("\n");
        printf("Enter your first name: ");
        scanf("%s", firstName);
        printf("Enter your last name: ");
        scanf("%s", lastName);
        printf("Enter your email: ");
        scanf("%s", email);
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("Enter your mobile number: ");
        scanf("%ld", &mobileNumber);
        printf("\n");

        printf("What course would you like to enroll into : \n");
        printf("[1] PCM\n");
        printf("[2] PCB\n");
        printf("[3] PCMB\n");
        printf("[4] Commerce\n");
        printf("[5] Arts\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&opt);

        switch(opt){
            case 1:
                strcpy(course, "PCM");
                break;
            case 2:
                strcpy(course, "PCB");
                break;
            case 3:
                strcpy(course, "PCMB");
                break;
            case 4:
                strcpy(course, "Commerce");
                break;
            case 5:
                strcpy(course, "Arts");
                break;
        }

        printf("Roll Number of %s %s is: %d\n", firstName, lastName, studentCount);
        printf("And is enrolled into : %s Course",course);
        studentData(firstName, lastName, email, studentCount, age, mobileNumber, course);
        printf("\n");
        printf("Would you like to register another student? '1(yes) / 0(no)': ");
        scanf("%d", &choice);
    }

    if (studentCount > 50) {
        printf("STUDENT LIMIT EXCEEDED!!\n");
    }
}
// Function to call when the user presses 1 to register a student.
void registerStudent() {
    printf("\n\n--- Register a new student ---\n\n");
    addStudent();
}
// Function to check the details of a student.
void checkDetails(){
    printf("\n");
    printf("\n");
    for(int i=1;i<studentCount;i++){
        printf("First Name : %s\n",student[i].firstName);
        printf("Last Name : %s\n",student[i].lastName);
        printf("Course : %s\n", student[i].course);
        printf("Roll Number : %d\n",i);
        printf("Email : %s\n",student[i].email);
        printf("Age : %d\n", student[i].age);
        printf("Mobile Number : %ld\n", student[i].mobileNumber);
        printf("\n\n");
    }
}

void deleteStudent() {
    printf("\n");
    int rollNumber;
    printf("Enter the roll number of the student to delete: ");
    scanf("%d", &rollNumber);

    if (rollNumber < 1 || rollNumber >= studentCount) {
        printf("Student with roll number %d does not exist.\n", rollNumber);
        return;
    }
    int index = rollNumber - 1;
    student[index].isDeleted = 1;

    for (int i = index; i < studentCount - 1; i++) {
        student[i] = student[i + 1];
        student[i].rollNumber = i + 1;
    }

    studentCount--;
    printf("Student with roll number %d has been deleted successfully.\n", rollNumber);
    printf("\n");
}

void updateStudent(){
    char firstName[30];
    char lastName[30];
    char email[50];
    int age;
    long mobileNumber;

    int rollNumber,choice,opt;
    printf("Enter the roll number of the student you want to change the details of : ");
    scanf("%d",&rollNumber);

    if(rollNumber < 1 || rollNumber > 50){
        printf("The roll number %d does not exist.",rollNumber);
        return;
    }
    printf("\n");
    printf("Now changing the details of Roll-Number : %d, student --- \n",rollNumber);
    printf("\n");
    printf("What information would you like to change?\n");
    printf("[1] Change the first name\n");
    printf("[2] Change the last name\n");
    printf("[3] Update email address\n");
    printf("[4] Update age\n");
    printf("[5] Update mobile number\n");
    printf("[6] Go Back\n");
    printf("What operation would you like to perform? : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        {
            printf("\n");
            printf("Enter the new first name : ");
            scanf("%s", student[rollNumber].firstName);
            printf("\n");
            printf("The First name is changed successfully ! \n\n");
            printf("\nWould you like to change/update anything else ? '1(yes) / 0(no)' : ");
            scanf("%d",&opt);
            switch(opt){
                case 1 : 
                    updateStudent();
                    break;
                case 0 :
                    return;
            }
            break;
        }
        case 2:
        {
            printf("\n");
            printf("Enter the new last name : ");
            scanf("%s", student[rollNumber].lastName);
            printf("\n");
            printf("The Last name is changed successfully ! \n\n");
            printf("Would you like to change/update anything else ? '1(yes) / 0(no)' : ");
            scanf("%d",&opt);
            switch(opt){
                case 1 : 
                    updateStudent();
                    break;
                case 0 :
                    return;
            }
            break;  
        }
        case 3:
        {
            printf("\n");
            printf("Enter the new email : ");
            scanf("%s", student[rollNumber].email);
            printf("\n");
            printf("The email is updated successfully ! \n\n");
            printf("Would you like to change/update anything else ? '1(yes) / 0(no)' : ");
            scanf("%d",&opt);
            switch(opt){
                case 1 : 
                    updateStudent();
                    break;
                case 0 :
                    return;
            }
            break;
        }
        case 4:
        {
            printf("\n");
            printf("Enter the age : ");
            scanf("%d", student[rollNumber].age);
            printf("\n");
            printf("The age is updated successfully ! \n\n");
            printf("Would you like to change/update anything else ? '1(yes) / 0(no)' : ");
            scanf("%d",&opt);
            switch(opt){
                case 1 : 
                    updateStudent();
                    break;
                case 0 :
                    return;
            }
            break;
        }
        case 5:
        {
            printf("\n");
            printf("Enter the new mobile number : ");
            scanf("%ld", student[rollNumber].mobileNumber);
            printf("\n");
            printf("The Mobile number is updated successfully ! \n\n");
            printf("Would you like to change/update anything else ? '1(yes) / 0(no)' : ");
            scanf("%d",&opt);
            switch(opt){
                case 1 : 
                    updateStudent();
                    break;
                case 0 :
                    return;
            }
            break;
        }
        case 6:
            return;
        default:
            printf("Error !");
    }

    return;
}

void findStudent(){
    char firstName[30];
    char email[50];
    char course[30];
    int rollNumber,opt,found=0;

    printf("\n");

    printf("How would you like to find the student ? \n");
    printf("[1] By Roll Number\n");
    printf("[2] By First Name\n");
    printf("How would you like to proceed : ");
    scanf("%d",&opt);
    switch(opt){
        case 1:
            printf("Enter Roll Number : ");
            scanf("%d",&rollNumber);
            if(rollNumber >= 1 || rollNumber <=50) {
                if(student[rollNumber - 1].isDeleted){
                    printf("Student with Roll Number %d has been deleted.\n", rollNumber);
                } else {
                    printf("\n");
                    printf("Details of Roll Number %d are : \n", rollNumber);
                    printf("First Name : %s\n", student[rollNumber].firstName);
                    printf("Last Name : %s\n", student[rollNumber].lastName);
                    printf("Course : %s\n", student[rollNumber].course);
                    printf("Email : %s\n", student[rollNumber].email);
                    printf("Age : %d\n", student[rollNumber].age);
                    printf("Mobile Number : %ld\n", student[rollNumber].mobileNumber);
                    printf("\n");
                    found = 1;
                }
            } else {
                printf("No student with roll number %d was found",rollNumber);
            }
            break;
        case 2:
            printf("Enter First Name : ");
            scanf("%s",firstName);
            for(int i=1;i<studentCount;i++){
                if (!student[i].isDeleted && strcmp(student[i].firstName, firstName) == 0) {
                    printf("\nDetails of %s:\n", firstName);
                    printf("Roll Number: %d\n", i);
                    printf("Last Name: %s\n", student[i].lastName);
                    printf("Course : ", student[rollNumber].course);
                    printf("Email: %s\n", student[i].email);
                    printf("Age: %d\n", student[i].age);
                    printf("Mobile Number: %ld\n", student[i].mobileNumber);
                    printf("\n");
                    found = 1;
                }
            }
            if (!found) {
                printf("No student found with first name %s.\n", firstName);
            }
            break;
    }

    return;
}

int main() {
    int choice;
    while (1) {
        printf("\n");
        printf("\t--- School Management System ---\n");
        printf("\t[1] Register a new student\n");
        printf("\t[2] Update student details\n");
        printf("\t[3] Check student details\n");
        printf("\t[4] Find Student\n");
        printf("\t[5] Delete a student\n");
        printf("\t[6] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerStudent();
                break;
            case 2:
                printf("\n");
                updateStudent();
                break;
            case 3:
                printf("\n");
                checkDetails();
                break;
            case 4:
                printf("\n");
                findStudent();
                break;
            case 5:
                printf("\n");
                deleteStudent();
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}