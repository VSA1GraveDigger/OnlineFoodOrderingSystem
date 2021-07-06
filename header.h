#ifndef __HEADER_H
#define __HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void signup();
void login();
int validation();
int main();
void account_check();
void hotels(int x);
void search_by_hotels();
void hotel_initialize();
void cart();



// Structure to store the details
typedef struct details {
    char uname[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
}detail;
detail s[100];
// Structure to store the hotels

struct hotels {
    char hotel[100];
    char first_food[20];
    char second_food[20];
    char third_food[20];
    char fourth_food[25];
    int first, second, third, fourth;
};

struct hotels m[5];
printf("jbhb");
#endif