# OS-Simulation-1
Sleeping Teacher Assistant with the help of Mutex Locks and semaphores.

Here we are Using N threads to allocate the Students and we are using 1 Thread to allocate the Teacher.

In this program we are using 5 Semaphores
1. The First Semaphore is used to Acknowledge the Signal and Wait of the Teacher
2. Here we use Array of 3 Semaphores to Signal wait for the Chair for 3 students
3. One semaphore to signal wait for the Teacher's Next student

And we use a mutex to increment and decrement the value of the Chair count
