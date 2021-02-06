#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open File
    FILE *file = fopen("ex6.txt", "a");

    // Get strings from user
    long id = get_long("Student ID: ");
    char grades = get_char("Grades(A ~ D): ");
    float avg = get_float("Average: ");

    // Print (write) strings to file
    fprintf(file, "ID : %li / Grades: %c / Average: : %.1f\n", id, grades, avg);

    // Close file
    fclose(file);
}