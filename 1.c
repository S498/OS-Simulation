#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<semaphore.h>
pthread_t *Students;
pthread_t TA;
int chair=0;
int curr=0;
pthread_mutex_t ChairAccess;
sem_t TA_sleep,student_sem,chair_sem[3];
void *TA_activity()
{
  while(true)
  {
    pthread_mutex)lock(&chairAccess);
    if(chair==0)
    {
      pthread_mutex_unlock(&chairAccess);
      break;
    }
    //Continue from if other than 0 chair available.
}
void *Student_activity(void *threadID);
main()
{
  int no_of_students,id;
 }
