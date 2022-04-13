/**
* @file Course Statistics
* @brief Identify, pass and count the courses to which students are applying.
* @author prof and albert
* @date 4/13/2022
*/

#include "student.h"
#include <stdbool.h>
 /**
 *Record matches of student names and courses
 */
typedef struct _course 
{
  char name[100];
  char code[10];
  Student *students;
  int total_students;
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);/*!< define a variable total_passing */


