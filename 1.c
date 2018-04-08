#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
pthread_t *Students;
pthread_t TA;
int chair=0;
int curr=0;
void *TA_activity();
void *Student_activity(void *threadID);
main()
{
  int no_of_students,id;
 }
