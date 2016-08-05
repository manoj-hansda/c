#ifndef FUNC_H
#define FUNC_H
struct student
{
    int id;
    char name[30];
    float marks;
} s;
int viewMenu();
void getDetails();
void writeFile();
void readFile();

#endif // FUNC_H
