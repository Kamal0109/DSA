// EXP 1 (i)Create simple programs of file creation, opening, closing, and seeking in C. Also demonstrate file read and write operations.
// Writing into the file

#include <stdio.h>
int main(void) {
// Create a new file
FILE *fp = fopen("file.txt", "w");
// Write to the file
fputs("Prabhat", fp);
// Close the file
fclose(fp);
// Open the file for reading
fp = fopen("file.txt", "r");
// Seek to the end of the file
fseek(fp, 0, SEEK_END);
// Get the current position in the file
long pos = ftell(fp);
// Seek to the beginning of the file
fseek(fp, 0, SEEK_SET);
// Read from the file
char buf[100];
fgets(buf, 100, fp);
// Print the contents of the file
printf("My name: %s\n", buf);
// Seek to the end of the file
fseek(fp, pos, SEEK_SET);
// Write to the file again
fputs(" Goodbye!", fp);
// Close the file
fclose(fp);
return 0;
}




/* EXP 1  (ii): Create, open and seek a file with different options/flags through 
above system calls. 
*/


// Open, reading from the file 

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(void) {
// Create a new file
int func = open("c operations.txt", O_CREAT | O_WRONLY, 0666);
// Write to the file
write(func, "Prabhat", 13);
// Seek to the beginning of the file
lseek(func, 0, SEEK_SET);
// Read from the file
char buf[100];
read(func, buf, 13);
buf[13] = '\0';
// Print the contents of the file
printf("File contents: This is code of Prabhat %s\n", buf);
// Close the file
close(func);
return 0;
}




// Seeking from the file:

#include <stdio.h> 
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt","w+"); 
    fputs("Successfully executed! \t ", fp);
    fseek( fp, 7, SEEK_SET ); 
    fputs(" Type your text here to write it ", fp);
    fclose(fp); 
    return 0;
}




// Create, open and seek a file with different options/flags through above system calls.

#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "w+");
    fputs("This is your friend", fp);
    fseek( fp, 7, SEEK_SET );
    fputs("Type your text here", fp);
    fclose(fp);
    return 0;
}




// EXP 2:Create simple programs implementing FCFS and SJF using different ATs.
#include<stdio.h>
void main()
{
int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
float avg_wt,avg_tat;
printf("Enter number of process:");
scanf("%d",&n);
printf("\nEnter Burst Time:\n");
for(i=0;i<n;i++)
{
printf("p%d:",i+1);
scanf("%d",&bt[i]);
p[i]=i+1; //contains process number
}
//sorting burst time in ascending order using selection sort
for(i=0;i<n;i++)
{
Lab 2
pos=i;
for(j=i+1;j<n;j++)
{
if(bt[j]<bt[pos])
pos=j;
}
temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}
wt[0]=0; //waiting time for first process will be zero
//calculate waiting time
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[i]+=bt[j];
total+=wt[i];
}
avg_wt=(float)total/n; //average waiting time
total=0;
printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i]; //calculate turnaround time
total+=tat[i];
printf("\np%d\t\t %d\t\t %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
}
avg_tat=(float)total/n; //average turnaround time
printf("\n\nAverage Waiting Time=%f",avg_wt);
printf("\nAverage Turnaround Time=%f\n",avg_tat);
}




// EXP 2 Q(ii )User Input Burst Time and allot Process Id.

#include <stdio.h>
int main()
{
    int A[100][4]; int i, j, n, total = 0;
    int index, temp; float avg_wt, avg_tat;
    printf("Enter number of process: "); 
    scanf("%d", &n); 
    printf("Enter Burst Time:   ");

    for (i = 0; i < n; i++) 
    {
        printf("P%d: ", i + 1);
        scanf("%d", &A[i][1]);
        A[i][0] = i + 1;
    }

    for (i = 0; i < n; i++) 
    { 
        index = i; for (j = i+1; j < n; j++)
        if (A[j][1] < A[index][1])
        {
            index = j;
        }

        temp = A[i][1];
        A[i][1] = A[index][1];
        A[index][1] = temp;
        temp = A[i][0];
        A[i][0] = A[index][0];
        A[index][0] = temp;
    }


    A[0][2] = 0; 
    for (i = 1; i < n; i++) 
    { 
        A[i][2] = 0;
            for (j = 0; j < i; j++)
                 A[i][2] += A[j][1];
    total += A[i][2];
    }

    avg_wt = (float)total / n;
    total = 0;
    printf("P BT WT TAT\n");
    for (i = 0; i < n; i++) 
    {
        A[i][3] = A[i][1] + A[i][2];
        total += A[i][3];
        printf("P%d %d %d %d\n", A[i][0],
        A[i][1], A[i][2], A[i][3]);
    }

    avg_tat = (float)total / n; 
    printf("Average Waiting Time= %f", avg_wt); 
    printf("\nAverage Turnaround Time= %f", avg_tat);
}





// Q(iii) Min heap through Heap
#include <stdio.h>
#include <limits.h>
struct process {
 int process_id;
 int arrival_time;
 int burst_time;
};
struct min_heap_node {
 int process_index;
 int burst_time;
};
void min_heapify(struct min_heap_node* heap, int size, int i) {
 int smallest = i;
 int left = 2 * i + 1;
 int right = 2 * i + 2;
 if (left < size && heap[left].burst_time < heap[smallest].burst_time) {
 smallest = left;
 }
 if (right < size && heap[right].burst_time < heap[smallest].burst_time) 
{
 smallest = right;
 }
 if (smallest != i) {
 struct min_heap_node temp = heap[i];
 heap[i] = heap[smallest];
 heap[smallest] = temp;
 min_heapify(heap, size, smallest);
 }
}
void build_min_heap(struct min_heap_node* heap, int size) {
 for (int i = (size / 2) - 1; i >= 0; i--) {
 min_heapify(heap, size, i);
 }
}
void sjf_scheduling(struct process* processes, int n) {
 int completed = 0;
 int current_time = 0;
 int heap_size = 0;
 struct min_heap_node heap[n];
 int completion_time[n], waiting_time[n], turnaround_time[n];
 float avg_waiting_time = 0, avg_turnaround_time = 0;
 // Add the first process to the min heap
 struct min_heap_node node;
 node.process_index = 0;
 node.burst_time = processes[0].burst_time;
 heap[heap_size] = node;
 heap_size++;
 while (completed < n) {
 // If the min heap is empty, increment the current time until a 
process arrives
 if (heap_size == 0) {
 current_time++;
 continue;
 }
 // Select the process with the shortest burst time from the min 
heap
 struct min_heap_node min_node = heap[0];
 int index = min_node.process_index;
 int burst = min_node.burst_time;
 // Update the completion time, waiting time, and turnaround time 
for the selected process
 completion_time[index] = current_time + burst;
 waiting_time[index] = current_time - processes[index].arrival_time;
 turnaround_time[index] = completion_time[index] -
processes[index].arrival_time;
 // Update the current time and mark the process as completed
 current_time = completion_time[index];
 processes[index].burst_time = INT_MAX;
 completed++;
 // Add all processes that have arrived during the current burst 
time to the min heap
 for (int i = 0; i < n; i++) {
 if (processes[i].arrival_time > current_time) {
 break;
 }
 if (processes[i].burst_time != INT_MAX) {
 struct min_heap_node node;
 node.process_index = i;
 node.burst_time = processes[i].burst_time;
 heap[heap_size] = node;
 heap_size++;
 }
 }
 // Rebuild the min heap
 build_min_heap(heap, heap_size);
 // Remove the process with the shortest burst time from the min 
heap
 heap[0] = heap[heap_size - 1];
 heap_size--;
 min_heapify(heap, heap_size,index);
 // Calculate the average waiting time and turnaround time so far
 avg_waiting_time = 0;
 avg_turnaround_time = 0;
 for (int i = 0; i < n; i++) {
 avg_waiting_time += waiting_time[i];
 avg_turnaround_time += turnaround_time[i];
 }
 avg_waiting_time /= n;
 avg_turnaround_time /= n;
 }
 // Print the output
 printf("\nSJF Scheduling Algorithm\n");
 printf("---------------------------------------------------------------
------\n");
 printf("Process ID Arrival Time Burst Time Waiting Time Turnaround 
Time\n");
 printf("---------------------------------------------------------------
------\n");
 for (int i = 0; i < n; i++) {
 printf("%-11d %-12d %-10d %-12d %-15d\n", 
processes[i].process_id, processes[i].arrival_time,
 completion_time[i] - processes[i].arrival_time, 
turnaround_time[i]);
 }
 printf("---------------------------------------------------------------
------\n");
 printf("Average Waiting Time = %f\n", avg_waiting_time);
 printf("Average Turnaround Time = %f\n", avg_turnaround_time);
}
int main() {
 int n;
 printf("Enter the number of processes: ");
 scanf("%d", &n);
 struct process processes[n];
 for (int i = 0; i < n; i++) {
 printf("Enter the arrival time and burst time of process %d: ", i + 
1);
 scanf("%d %d", &processes[i].arrival_time, 
&processes[i].burst_time);
 processes[i].process_id = i + 1;
 }
 sjf_scheduling(processes, n);
 return 0;
}



/* lab 3 (i) Create simple programs implementing RR and Priority scheduling 
using same and different ATs */
#include<stdio.h>
int main()
{
 int 
bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
 printf("Enter Total Number of Process:");
 scanf("%d",&n);
 printf("\nEnter Burst Time and Priority\n");
 for(i=0;i<n;i++)
 {
 printf("\nP[%d]\n",i+1);
 printf("Burst Time:");
 scanf("%d",&bt[i]);
 printf("Priority:");
 scanf("%d",&pr[i]);
 p[i]=i+1; //contains process number
 }
 //sorting burst time, priority and process number in ascending order 
using selection sort
 for(i=0;i<n;i++)
 {
 pos=i;
 for(j=i+1;j<n;j++)
 {
 if(pr[j]<pr[pos])
 pos=j;
 }
 temp=pr[i];
 pr[i]=pr[pos];
 pr[pos]=temp;
 temp=bt[i];
 bt[i]=bt[pos];
 bt[pos]=temp;
 temp=p[i];
 p[i]=p[pos];
 p[pos]=temp;
 }
 wt[0]=0; //waiting time for first process is zero
 //calculate waiting time
 for(i=1;i<n;i++)
 {
 wt[i]=0;
 for(j=0;j<i;j++)
 wt[i]+=bt[j];
 total+=wt[i];
 }
 avg_wt=total/n; //average waiting time
 total=0;
 printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
 for(i=0;i<n;i++)
 {
 tat[i]=bt[i]+wt[i]; //calculate turnaround time
 total+=tat[i];
 printf("\nP[%d]\t\t %d\t\t 
%d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
 }
 avg_tat=total/n; //average turnaround time
 printf("\n\nAverage Waiting Time=%d",avg_wt);
 printf("\nAverage Turnaround Time=%d\n",avg_tat);
 return 0;
}



/* lab 3 q(2) Priority Scheduling */
#include<stdio.h>
int main()
{
 int count,j,n,time,remain,flag=0,time_quantum;
 int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10];
 printf("Enter Total Process:\t ");
 scanf("%d",&n);
 remain=n;
 for(count=0;count<n;count++)
 {
 printf("Enter Arrival Time and Burst Time for Process Process 
Number %d :",count+1);
 scanf("%d",&at[count]);
 scanf("%d",&bt[count]);
 rt[count]=bt[count];
 }
 printf("Enter Time Quantum:\t");
 scanf("%d",&time_quantum);
 printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
 for(time=0,count=0;remain!=0;)
 {
 if(rt[count]<=time_quantum && rt[count]>0)
 {
 time+=rt[count];
 rt[count]=0;
 flag=1;
 }
 else if(rt[count]>0)
 {
 rt[count]-=time_quantum;
 time+=time_quantum;
 }
 if(rt[count]==0 && flag==1)
 {
 remain--;
 printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],timeat[count]-bt[count]);
 wait_time+=time-at[count]-bt[count];
 turnaround_time+=time-at[count];
 flag=0;
 }
 if(count==n-1)
 count=0;
 else if(at[count+1]<=time)
 count++;
 else
 count=0;
 }
 printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n);
 printf("Avg Turnaround Time = %f",turnaround_time*1.0/n);
 return 0;
}





// lab 3 q(4) Preemptive scheduling with MinHeap
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
typedef struct Process {
 int id;
 int priority;
 int burst_time;
} Process;
typedef struct MinHeap {
 Process arr[MAX_SIZE];
 int size;
} MinHeap;
void swap(Process *a, Process *b) {
 Process temp = *a;
 *a = *b;
 *b = temp;
}
void min_heapify(MinHeap *heap, int i) {
 int smallest = i;
 int left = 2 * i + 1;
 int right = 2 * i + 2;
 if (left < heap->size && heap->arr[left].priority < heap-
>arr[smallest].priority) {
 smallest = left;
 }
 if (right < heap->size && heap->arr[right].priority < heap-
>arr[smallest].priority) {
 smallest = right;
 }
 if (smallest != i) {
 swap(&heap->arr[i], &heap->arr[smallest]);
 min_heapify(heap, smallest);
 }
}
void build_min_heap(MinHeap *heap) {
 int i;
 for (i = heap->size / 2 - 1; i >= 0; i--) {
 min_heapify(heap, i);
 }
}
void insert_process(MinHeap *heap, int id, int priority, int burst_time) {
 if (heap->size == MAX_SIZE) {
 printf("Heap overflow!\n");
 return;
 }
 Process p = {id, priority, burst_time};
 heap->arr[heap->size++] = p;
 int i = heap->size - 1;
 while (i != 0 && heap->arr[(i - 1) / 2].priority > 
heap>arr[i].priority) {
 swap(&heap->arr[(i - 1) / 2], &heap->arr[i]);
 i = (i - 1) / 2;
 }
}
Process pop_min_process(MinHeap *heap) {
 if (heap->size == 0) {
 printf("Heap underflow!\n");
 exit(1);
 }
 Process min = heap->arr[0];
 heap->arr[0] = heap->arr[heap->size - 1];
 heap->size--;
 min_heapify(heap, 0);
 return min;
}
int main() {
 MinHeap heap = {{0}, 0};
 insert_process(&heap, 1, 3, 10);
 insert_process(&heap, 2, 2, 5);
 insert_process(&heap, 3, 1, 8);
 build_min_heap(&heap);
 while (heap.size > 0) {
 Process p = pop_min_process(&heap);
 printf("Process %d with priority %d and burst time %d executed\n", 
p.id, p.priority, p.burst_time);
 }
 return 0;
}






// Lab 4 : Perform MLQ scheduling with different Algorithms and with 
// different ATs

/* Q1 First-Come, First-Served (FCFS)*/

#include <stdio.h>
#define MAX_PROCESSES 100
struct process {
 int arrival_time;
 int burst_time;
 int total_burst_time;
 int priority;
};
int main() {
 int n, i, j, time = 0, quantum;
 int fcfs_queue[MAX_PROCESSES], sjf_queue[MAX_PROCESSES], 
priority_queue[MAX_PROCESSES], rr_queue[MAX_PROCESSES];
 int fcfs_front = 0, sjf_front = 0, priority_front = 0, rr_front = 0;
 int fcfs_rear = -1, sjf_rear = -1, priority_rear = -1, rr_rear = -1;
 int fcfs_completed = 0, sjf_completed = 0, priority_completed = 0, 
rr_completed = 0;
 float fcfs_waiting_time[MAX_PROCESSES] = {0}, 
sjf_waiting_time[MAX_PROCESSES] = {0},
 priority_waiting_time[MAX_PROCESSES] = {0}, 
rr_waiting_time[MAX_PROCESSES] = {0};
 float fcfs_avg_waiting_time = 0, sjf_avg_waiting_time = 0, 
priority_avg_waiting_time = 0, rr_avg_waiting_time = 0;
 struct process processes[MAX_PROCESSES];
 // Get input
 printf("Enter the number of processes: ");
 scanf("%d", &n);
 printf("Enter the arrival time, burst time, priority (0-3) for each 
process:\n");
 for (i = 0; i < n; i++) {
 scanf("%d %d %d", &processes[i].arrival_time, 
&processes[i].burst_time, &processes[i].priority);
 processes[i].total_burst_time = processes[i].burst_time;
 }
 printf("Enter the time quantum for round-robin scheduling: ");
 scanf("%d", &quantum);
 // Add each process to the appropriate queue based on priority
 for (i = 0; i < n; i++) {
 if (processes[i].arrival_time <= time && processes[i].burst_time > 
0) {
 if (processes[i].priority == 0) {
 fcfs_rear++;
 fcfs_queue[fcfs_rear] = i;
 } else if (processes[i].priority == 1) {
 sjf_rear++;
 sjf_queue[sjf_rear] = i;
 } else if (processes[i].priority == 2) {
 priority_rear++;
 priority_queue[priority_rear] = i;
 } else if (processes[i].priority == 3) {
 rr_rear++;
 rr_queue[rr_rear] = i;
 }
 }
 }
 // Run each queue until all processes are completed
 while (fcfs_completed + sjf_completed + priority_completed + 
rr_completed < n) {
 // FCFS queue
 if (fcfs_rear >= fcfs_front) {
 int pid = fcfs_queue[fcfs_front];
 fcfs_front++;
 fcfs_completed++;
 time += processes[pid].burst_time;
 fcfs_waiting_time[pid] = time - processes[pid].arrival_time -
processes[pid].burst_time;
 fcfs_avg_waiting_time += fcfs_waiting_time[pid];
 }
 // SJF queue
 else if (sjf_rear >= sjf_front) {
 int pid = sjf_queue[sjf_front];
 sjf_front++;
 sjf_completed++;
 time += processes[pid].burst_time;
 sjf_waiting_time[pid] = time - processes[pid].arrival_time -
processes[pid].burst_time;
 sjf_avg_waiting_time += sjf_waiting_time[pid];
 }
 // Priority queue
 else if (priority_rear >= priority_front) {
 int pid = priority_queue[priority_front];
 priority_front++;
 priority_completed++;
 time += processes[pid].burst_time;
 priority_waiting_time[pid] = time - processes[pid].arrival_time 
- processes[pid].burst_time;
 priority_avg_waiting_time += priority_waiting_time[pid];
 }
 // Round-robin queue
 else if (rr_rear >= rr_front) {
 int pid = rr_queue[rr_front];
 rr_front++;
 // If remaining burst time is less than or equal to time 
quantum, complete the process
 if (processes[pid].burst_time <= quantum) {
 rr_completed++;
 time += processes[pid].burst_time;
 rr_waiting_time[pid] = time - processes[pid].arrival_time -
processes[pid].total_burst_time;
 rr_avg_waiting_time += rr_waiting_time[pid];
 }
 // If remaining burst time is greater than time quantum, 
add process back to queue
 else {
 time += quantum;
 processes[pid].burst_time -= quantum;
 rr_rear++;
 rr_queue[rr_rear] = pid;
 }
 }
 // If all queues are empty, increment time
 else {
 time++;
 }
 // Add any new processes to the appropriate queue
 for (i = 0; i < n; i++) {
 if (processes[i].arrival_time <= time && 
processes[i].burst_time > 0) {
 if (processes[i].priority == 0) {
 fcfs_rear++;
fcfs_queue[fcfs_rear] = i;
 } else if (processes[i].priority == 1) {
 sjf_rear++;
 sjf_queue[sjf_rear] = i;
 } else if (processes[i].priority == 2) {
 priority_rear++;
priority_queue[priority_rear] = i;
 } else if (processes[i].priority == 3) {
 rr_rear++;
 rr_queue[rr_rear] = i;
 }
 }
 }
 }
// Calculate average waiting time for each algorithm
 fcfs_avg_waiting_time /= n;
 sjf_avg_waiting_time /= n;
 priority_avg_waiting_time /= n;
 rr_avg_waiting_time /= n;
// Print results
 printf("Algorithm\tAverage waiting time\n");
 printf("---------------------------------\n");
 printf("FCFS\t\t%.2f\n", fcfs_avg_waiting_time);
 printf("SJF\t\t%.2f\n", sjf_avg_waiting_time);
 printf("Priority\t\t%.2f\n", priority_avg_waiting_time);
 printf("RR\t\t %.2f\n", rr_avg_waiting_time);
 return 0;}





 /* Q(2) Develop MLQ, where a Time slice is given to each queue i.e., each queue gets a
certain amount of CPU time(assume any) that it can schedule amongst its processes*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_PROCESS 10
typedef struct Process {
 int process_id;
 int arrival_time;
 int burst_time;
 int remaining_time;
} Process;
// System Process Ready Queue
Process system_process_queue[MAX_PROCESS];
int system_queue_size = 0;
// User Process Ready Queue
Process user_process_queue[MAX_PROCESS];
int user_queue_size = 0;
// Time slice for system process queue and user process queue
int system_time_slice = 2;
int user_time_slice = 4;
// Insert a process into the system process queue
void insert_into_system_process_queue(Process p) {
 // Find the position to insert the process based on the remaining time 
(shortest job first)
 int pos = 0;
 for (int i = 0; i < system_queue_size; i++) {
 if (p.remaining_time < system_process_queue[i].remaining_time) {
 pos = i;
 break;
 } else {
 pos++;
 }
 }
 // Shift the processes to the right to make space for the new process
 for (int i = system_queue_size; i > pos; i--) {
 system_process_queue[i] = system_process_queue[i-1];
 }
 // Insert the new process into the queue
 system_process_queue[pos] = p;
 system_queue_size++;
}
// Insert a process into the user process queue
void insert_into_user_process_queue(Process p) {
 // Insert the new process at the end of the queue
 user_process_queue[user_queue_size] = p;
 user_queue_size++;
}
// Execute all the processes in the system process queue and user process 
queue for their respective time slice
void execute_all_queues() {
 // Execute the System Process queue using SJF
 for (int i = 0; i < system_queue_size; i++) {
 Process *p = &system_process_queue[i];
 if (p->remaining_time > 0) {
 p->remaining_time -= system_time_slice;
 if (p->remaining_time < 0) {
 p->remaining_time = 0;
 }
 printf("Executing process %d from System Process queue (SJF) 
for time slice %d, remaining time: %d\n", p->process_id, system_time_slice, 
p->remaining_time);
 }
 }
 // Execute the User Process queue using FCFS
 for (int i = 0; i < user_queue_size; i++) {
 Process *p = &user_process_queue[i];
 if (p->remaining_time > 0) {
 p->remaining_time -= user_time_slice;
 if (p->remaining_time < 0) {
 p->remaining_time = 0;
 }
 printf("Executing process %d from User Process queue (FCFS) for 
time slice %d, remaining time: %d\n", p->process_id, user_time_slice, p-
>remaining_time);
 }
 }
}
int main() {
 // Example processes
 Process p1 = {1, 0, 5, 5};
 Process p2 = {2, 1, 3, 3};
 Process p3 = {3, 2, 4, 4};
 Process p4 = {4, 3, 2, 2};
 Process p5 = {5, 4, 1, 2};
 // Insert processes into their respective queues
insert_into_system_process_queue(p1);
insert_into_user_process_queue(p2);
insert_into_user_process_queue(p3);
insert_into_system_process_queue(p4);
insert_into_system_process_queue(p5);
// Execute the queues for a few time slices
for (int i = 0; i < 5; i++) {
 printf("\nTime Slice %d\n", i+1);
 execute_all_queues();
}
return 0;
}




// Q5 Develop Producer-Consumer Synchronization with sleep() and wakeup() system calls.
// Also, explain why it is not a recommended option.


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define BUFFER_SIZE 10
sem_t empty, full;
int buffer[BUFFER_SIZE];
int in = 0, out = 0;
void *producer(void *arg) {
while (1) {
int item = rand() % 100;
sem_wait(&empty);
buffer[in] = item;
in = (in + 1) % BUFFER_SIZE;
sem_post(&full);
printf("Produced item: %d\n", item);
sleep(1);
}
}
void *consumer(void *arg) {
while (1) {
sem_wait(&full);
int item = buffer[out];
out = (out + 1) % BUFFER_SIZE;
sem_post(&empty);
printf("Consumed item: %d\n", item);
sleep(1);
}
}
int main() {
sem_init(&empty, 0, BUFFER_SIZE);
sem_init(&full, 0, 0);
pthread_t producer_thread, consumer_thread;
pthread_create(&producer_thread, NULL, producer, NULL);

Output:-
pthread_create(&consumer_thread, NULL, consumer, NULL);
pthread_join(producer_thread, NULL);
pthread_join(consumer_thread, NULL);
sem_destroy(&empty);
sem_destroy(&full);
return 0;
}







//Q6 (i)(System Calls related to Process Creation Implementation)
// Create n number of processes with different execution codes

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void child_process(int id) {
 printf("Child process %d is running\n", id);
 // put your code here
 exit(0);
}
int main() {
 int n = 5; // number of child processes to create
 int i, pid;
 for (i = 1; i <= n; i++) {
 pid = fork();
 if (pid == 0) {
 child_process(i);
 } else if (pid < 0) {
 printf("Error: fork failed\n");
exit(1);
 }
 }
 // wait for all child processes to complete
 int status;
 for (i = 1; i <= n; i++) {
 wait(&status);
 }
 return 0;
}



// (ii)Try different system call of exec() family

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
pid_t pid;
int status;
// execl()
printf("execl() system call\n");
pid = fork();
if (pid == 0) {
execl("/bin/ls","ls","-l", NULL);
exit(0);
} else {
wait(&status);
}
// execlp()
printf("\nexeclp() system call\n");
pid = fork();
if (pid == 0) {
execlp("ls","ls","-1", NULL);
exit(0);
} else {
wait(&status);
}
// execv()
printf("\nexecv() system call\n");
pid = fork();
if (pid == 0) {
char *args[] = {"ls","-l", NULL};
execv("/bin/ls", args);
exit(0);
} else {
wait(&status);
}
// execvp()
printf("\nexecvp() system call\n");
pid = fork();
if (pid == 0) {
char *args[] = {"ls","-l", NULL};
execvp("ls", args);
exit(0);
} else {
wait(&status);
}
return 0;
}




// (iii)Write a code for tracing the execution of Parent and Child processes

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
 int n = 5; // Number of child processes to create
 int i, pid, status;
 for (i = 1; i <= n; i++) {
 pid = fork(); // Create a child process
 if (pid == 0) { // Child process
 if (i == 1) {
 execl("/bin/ls", "ls", "-l", NULL); // Execute "ls -l" 
 } else if (i == 2) {
 execl("/bin/pwd", "pwd", NULL); // Execute "pwd" command
 } else if (i == 3) {
 execl("/bin/echo", "echo", "Hello, World!", NULL); // 
 } else {
 printf("Child %d: Waiting for user input...\n", i);
 char input[100];
 scanf("%s", input); // Wait for user input
 printf("Child %d: User input: %s\n", i, input);
 }
 exit(0); // Terminate child process
 } else if (pid < 0) {
 printf("Error: Failed to fork.\n");
 exit(1);
 }
 }
 // Parent process
 for (i = 1; i <= n; i++) {
 wait(&status); // Wait for child process to terminate
 }
 printf("All child processes have terminated.\n");
 return 0;
}







//  EXP 7 Implement the entire mechanism of Deadlock Avoidance by depicting the fulfilment of
//  necessary condition and sufficient conditions of deadlock avoidance.

#include <stdio.h>
#include <stdlib.h>
// Number of processes in the system
#define N 5
// Number of resource types in the system
#define M 3
// Available resources
int available[M] = {10, 5, 7};
// Maximum demand of each process
int maximum[N][M] = {
 {6, 3, 2},
 {3, 2, 2},
 {2, 2, 2},
 {4, 3, 3},
 {1, 2, 2}
};
// Resources allocated to each process
int allocation[N][M] = {
 {0, 1, 0},
 {2, 0, 0},
 {3, 0, 2},
 {2, 1, 1},
 {0, 0, 2}
};
// Need of each process
int need[N][M];
// Function to calculate the need matrix
void calculate_need() {
 int i, j;
 for (i = 0; i < N; i++) {
 for (j = 0; j < M; j++) {
 need[i][j] = maximum[i][j] - allocation[i][j];
 }
 }
}
// Function to check if the system is in a safe state
int is_safe() {
 int i, j;
 int work[M];
 int finish[N] = {0};
 // Initialize work vector
 for (i = 0; i < M; i++) {
 work[i] = available[i];
 }
 // Find an unfinished process whose needs can be satisfied
 for (i = 0; i < N; i++) {
 if (finish[i] == 0) {
 int can_be_allocated = 1;
 for (j = 0; j < M; j++) {
 if (need[i][j] > work[j]) {
 can_be_allocated = 0;
 break;
 }
 }
 if (can_be_allocated) {
 // Allocate resources to this process
 finish[i] = 1;
 for (j = 0; j < M; j++) {
 work[j] += allocation[i][j];
 }
 i = -1; // Restart the loop from the beginning
 }
 }
 }
 // If all processes have been finished, the system is in a safe state
 for (i = 0; i < N; i++) {
 if (finish[i] == 0) {
 return 0;
 }
 }
 return 1;
}
// Function to request resources for a process
void request_resources(int process_id, int request[]) {
 int i, j;
 // Check if the request is valid
 for (i = 0; i < M; i++) {
 if (request[i] > need[process_id][i] || request[i] > available[i]) 
{
 printf("Error: Invalid request\n");
 return;

 }
 // Try to allocate the resources to the process
 for (i = 0; i < M; i++) {
 available[i] -= request[i];
 allocation[process_id][i] += request[i];
 need[process_id][i] -= request[i];
 }
// Check if the system is still in a safe state
 if (is_safe()) {
 printf("Resources allocated to process %d\n", process_id);
 } else {
 // The system is not in a safe state, so undo the allocation
 for (i = 0; i < M; i++) {
 available[i] += request[i];
 allocation[process_id][i] -= request[i];
 need[process_id][i] += request[i];
 }
 printf("Resources cannot be allocated to process %d\n", 
process_id);
 }
}
// Function to release resources held by a process
void release_resources(int process_id, int release[]) {
 int i;
 for (i = 0; i < M; i++) {
 available[i] += release[i];
 allocation[process_id][i] -= release[i];
 need[process_id][i] += release[i];
 }
}
int main() {
 int request[N][M] = {
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0}
 };
 int release[N][M] = {
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0},
 {0, 0, 0}
 };
 int i, j;
 // Calculate the need matrix
 calculate_need();
// Request resources for each process in turn
 for (i = 0; i < N; i++) {
 printf("Process %d requesting resources\n", i);
 printf("Request vector: ");
 for (j = 0; j < M; j++) {
 request[i][j] = rand() % (need[i][j] + 1);
 printf("%d ", request[i][j]);
 }
 printf("\n");
 request_resources(i, request[i]);
 }
// Release resources held by each process in turn
 for (i = 0; i < N; i++) {
 printf("Process %d releasing resources\n", i);
 printf("Release vector: ");
 for (j = 0; j < M; j++) {
 release[i][j] = rand() % (allocation[i][j] + 1);
 printf("%d ", release[i][j]);
 }
 printf("\n");
 release_resources(i, release[i]);
 }
 return 0;
}}










//  Q8 Implement FF, BF and WF using different request sizes
#include <stdio.h>
#include <stdlib.h>
#define MEMORY_SIZE 100
// Memory block structure
typedef struct {
 int start_address;
 int size;
} memory_block;
// Memory block array
memory_block memory[MEMORY_SIZE];
// Initialize memory array
void init_memory() {
 int i;
 for (i = 0; i < MEMORY_SIZE; i++) {
 memory[i].start_address = -1;
 memory[i].size = -1;
 }
}
// Allocate memory using first-fit strategy
int first_fit(int request_size) {
 int i, j, start_address = -1;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 start_address = i;
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size) { // Check if block is large enough
 memory[i].start_address = i;
 memory[i].size = request_size;
 return i;
 }
 i = j - 1;
 }
 }
 return -1; // Not enough free memory
}
// Allocate memory using best-fit strategy
int best_fit(int request_size) {
 int i, j, start_address = -1, smallest_size = MEMORY_SIZE;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size && j - i < smallest_size) { // Check 
if block is large enough and smallest
 start_address = i;
 smallest_size = j - i;
 }
 i = j - 1;
 }
 }
 if (start_address != -1) {
 memory[start_address].start_address = start_address;
 memory[start_address].size = request_size;
 }
 return start_address;
}
// Allocate memory using worst-fit strategy
int worst_fit(int request_size) {
 int i, j, start_address = -1, largest_size = -1;
 for (i = 0; i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) { // Check if block is free
 j = i + 1;
 while (j < MEMORY_SIZE && memory[j].size == -1) {
 j++;
 }
 if (j - i >= request_size && j - i > largest_size) { // Check 
if block is large enough and largest
 start_address = i;
 largest_size = j - i;
 }
 i = j - 1;
 }
 }
 if (start_address != -1) {
 memory[start_address].start_address = start_address;
 memory[start_address].size = request_size;
 }
 return start_address;
}
// Deallocate memory block
void deallocate(int start_address) {
 int i;
 for (i = start_address; i < start_address + memory[start_address].size; 
i++) {
 memory[i].start_address = -1;
 memory[i].size = -1;
 }
}
// Print memory block
void print_memory() {
 int i;
 printf("Memory Block:\n");
 for (i = 0;i < MEMORY_SIZE; i++) {
 if (memory[i].size == -1) {
 printf("[ ]"); // Free memory block
 } else {
 printf("[X]"); // Allocated memory block
 }
 }
 printf("\n\n");
}
int main() {
 init_memory();
 // Allocate memory using first-fit strategy
 printf("First-Fit Allocation:\n");
 int addr1 = first_fit(5);
 int addr2 = first_fit(10);
 int addr3 = first_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
// Deallocate memory blocks
 printf("Deallocate block 2\n");
 deallocate(addr2);
 print_memory();
 printf("\n");
// Allocate memory using best-fit strategy
 printf("Best-Fit Allocation:\n");
 addr1 = best_fit(5);
 addr2 = best_fit(10);
 addr3 = best_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
// Deallocate memory blocks
 printf("Deallocate block 3\n");
 deallocate(addr3);
 print_memory();
 printf("\n");
// Allocate memory using worst-fit strategy
 printf("Worst-Fit Allocation:\n");
 addr1 = worst_fit(5);
 addr2 = worst_fit(10);
 addr3 = worst_fit(15);
 print_memory();
 printf("Allocated block 1: %d - %d\n", addr1, addr1 + 
memory[addr1].size - 1);
 printf("Allocated block 2: %d - %d\n", addr2, addr2 + 
memory[addr2].size - 1);
 printf("Allocated block 3: %d - %d\n", addr3, addr3 + 
memory[addr3].size - 1);
 printf("\n");
 return 0;
}








// Q 9  Implement each of the above algorithms( separately) using a reference string : - 
//4,7,6,1,7,6,1,2,7,2 and number of frames for allocation: 3
// FIFO ALGO

#include <stdio.h>
int main() {
 int ref_str[] = {4,7,6,1,7,6,1,2,7,2};
 int n = sizeof(ref_str) / sizeof(ref_str[0]);
 int frames[3] = {-1, -1, -1}; // Initialize frames to -1
 int frame_count = 0;
 int page_faults = 0;
 int i, j;
 for (i = 0; i < n; i++) {
 int page = ref_str[i];
 int hit = 0;
 for (j = 0; j < frame_count; j++) {
 if (frames[j] == page) {
 hit = 1;
 break;
 }
 }
 if (!hit) {
 frames[frame_count] = page;
 frame_count++;
 if (frame_count > 3) {
 frame_count = 3;
 }
 page_faults++;
 }
 printf("%d: ", page);
 for (j = 0; j < frame_count; j++) {
 printf("%d ", frames[j]);
 }
 printf("\n");
 }
 printf("Page faults: %d\n", page_faults);
 return 0;
}







// LRU ALGORITHM
#include <stdio.h>
int main() {
 int ref_str[] = {4,7,6,1,7,6,1,2,7,2};
 int n = sizeof(ref_str) / sizeof(ref_str[0]);
 int frames[3] = {-1, -1, -1}; // Initialize frames to -1
 int frame_count = 0;
 int page_faults = 0;
 int i, j;
 for (i = 0; i < n; i++) {
 int page = ref_str[i];
 int hit = 0;
 for (j = 0; j < frame_count; j++) {
 if (frames[j] == page) {
 hit = 1;
 // Move the page to the end of the frames array
 int temp = frames[j];
 for (int k = j; k < frame_count - 1; k++) {
 frames[k] = frames[k + 1];
 }
 frames[frame_count - 1] = temp;
 break;
 }
 }
 if (!hit) {
 if (frame_count < 3) {
 frames[frame_count] = page;
 frame_count++;
 } else {
 // Replace the least recently used page
 frames[0] = frames[1];
 frames[1] = frames[2];
 frames[2] = page;
 }
 page_faults++;
 }
 printf("%d: ", page);
 
 while (j < frame_count) {
 printf("%d ", frames[j]);
 j++;
 }
 printf("\n");
 }
 printf("Page faults: %d\n", page_faults);
 return 0;
}





// Optimal Algorithm:
#include <stdio.h>
int main() {
 int ref_str[] = {4,7,6,1,7,6,1,2,7,2};
 int n = sizeof(ref_str) / sizeof(ref_str[0]);
 int frames[3] = {-1, -1, -1}; // Initialize frames to -1
 int frame_count = 0;
 int page_faults = 0;
 int i, j;
 for (i = 0; i < n; i++) {
 int page = ref_str[i];
 int hit = 0;
 for (j = 0; j < frame_count; j++) {
 if (frames[j] == page) {
 hit = 1;
 break;
 }
 }
 if (!hit) {
 if (frame_count < 3) {
 frames[frame_count] = page;
 frame_count++;
 } else {
 int max_distance = -1;
 int replace_index = -1;
 for (j = 0; j < frame_count; j++) {
 int distance = 0;
 int k;
 for (k = i + 1; k < n; k++) {
 if (frames[j] == ref_str[k]) {
 break;
 }
distance++;
 }
 if (distance > max_distance) {
 max_distance = distance;
 replace_index = j;
 }
 }
 frames[replace_index] = page;
 }
 page_faults++;
 }
 printf("%d: ", page);
 for (j = 0; j < frame_count; j++) {
 printf("%d ", frames[j]);
 }
 printf("\n");
 }
 printf("Page faults: %d\n", page_faults);
 return 0;
}




// 10. Build and implement single level and 2-level directories
//Two-level Directory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILENAME_LENGTH 50
#define MAX_FILES_PER_DIRECTORY 10
/* Define a structure to represent a file */
typedef struct file {
 char filename[MAX_FILENAME_LENGTH];
} file_t;
/* Define a structure to represent a directory */
typedef struct directory {
 char dirname[MAX_FILENAME_LENGTH];
 int num_files;
 file_t files[MAX_FILES_PER_DIRECTORY];
 struct directory* subdirectories;
} directory_t;
/* Create a new file with the given filename */
file_t* create_file(char* filename) {
 file_t* new_file = malloc(sizeof(file_t));
 if (new_file == NULL) {
 printf("Failed to allocate memory for file.\n");
 exit(1);
 }
 strcpy(new_file->filename, filename);
 return new_file;
}
/* Add a new file to the given directory */
void add_file_to_directory(directory_t* directory, char* filename) {
 if (directory->num_files >= MAX_FILES_PER_DIRECTORY) {
 printf("Directory %s is full.\n", directory->dirname);
 return;
 }
 file_t* new_file = create_file(filename);
 directory->files[directory->num_files] = *new_file;
 directory->num_files++;
}
/* Create a new directory with the given dirname */
directory_t* create_directory(char* dirname) {
 directory_t* new_directory = malloc(sizeof(directory_t));
 if (new_directory == NULL) {
 printf("Failed to allocate memory for directory.\n");
 exit(1);
 }
 strcpy(new_directory->dirname, dirname);
 new_directory->num_files = 0;
 new_directory->subdirectories = NULL;
 return new_directory;
}
/* Add a new subdirectory to the given directory */
void add_subdirectory_to_directory(directory_t* directory, char* dirname) {
 directory_t* new_directory = create_directory(dirname);
 directory_t* current_directory = directory->subdirectories;
 if (current_directory == NULL) {
 directory->subdirectories = new_directory;
 } else {
 while (current_directory->subdirectories != NULL) {
 current_directory = current_directory->subdirectories;
 }
 current_directory->subdirectories = new_directory;
 }
}
/* Print the files in the given directory */
void print_files_in_directory(directory_t* directory) {
 printf("Directory %s:\n", directory->dirname);
 if (directory->num_files == 0) {
 printf(" No files.\n");
 } else {
 for (int i = 0; i < directory->num_files; i++) {
 printf(" %s\n", directory->files[i].filename);
 }
 }
}
/* Print the subdirectories of the given directory */
void print_subdirectories(directory_t* directory) {
 if (directory->subdirectories == NULL) {
 return;
 }
 directory_t* current_directory = directory->subdirectories;
 printf("Subdirectories of %s:\n", directory->dirname);
 while (current_directory != NULL) {
 printf(" %s\n", current_directory->dirname);
 current_directory = current_directory->subdirectories;
 }
}
int main() {
 /* Create a root directory */
 directory_t* root_directory = create_directory("root");
 /* Add some files to the root directory */
 add_file_to_directory(root_directory, "file1.txt");
 add_file_to_directory(root_directory, "file2.txt");
 /* Add a subdirectory to the root directory */
 add_subdirectory_to_directory(root_directory, "subdir1");
 /* Add some files to the subdirectory */
 directory_t* subdir1 = root_directory->subdirectories;
 add_file_to_directory(subdir1, "subdir1file1.txt");
 add_file_to_directory(subdir1, "subdir1file2.txt");
 /* Add a subdirectory to the subdirectory */
 add_subdirectory_to_directory(subdir1, "subdir2");
 /* Add some files to the subdirectory of the subdirectory */
 directory_t* subdir2 = subdir1->subdirectories;
 add_file_to_directory(subdir2, "subdir2file1.txt");
 /* Print the files in the root directory */
 print_files_in_directory(root_directory);
 /* Print the subdirectories of the root directory */
 print_subdirectories(root_directory);
 /* Print the files in the subdirectory */
 print_files_in_directory(subdir1);
 /* Print the subdirectories of the subdirectory */
 print_subdirectories(subdir1);
 /* Print the files in the subdirectory of the subdirectory */
 print_files_in_directory(subdir2);
 return 0;
}


// Q 10 (ii) Build and implement tree-structured directories. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILENAME_LENGTH 50
/* Define a structure to represent a file */
typedef struct file {
 char filename[MAX_FILENAME_LENGTH];
 struct file* next;
} file_t;
/* Define a structure to represent a directory */
typedef struct directory {
 char dirname[MAX_FILENAME_LENGTH];
 struct directory* parent;
 struct directory* child;
 struct directory* next;
 file_t* files;
} directory_t;
/* Create a new file with the given filename */
file_t* create_file(char* filename) {
 file_t* new_file = malloc(sizeof(file_t));
 if (new_file == NULL) {
 printf("Failed to allocate memory for file.\n");
 exit(1);
 }
 strcpy(new_file->filename, filename);
 new_file->next = NULL;
 return new_file;
}
/* Add a new file to the given directory */
void add_file_to_directory(directory_t* directory, char* filename) {
 file_t* new_file = create_file(filename);
 file_t* current_file = directory->files;
 if (current_file == NULL) {
 directory->files = new_file;
 } else {
 while (current_file->next != NULL) {
 current_file = current_file->next;
 }
 current_file->next = new_file;
 }
}
/* Create a new directory with the given dirname */
directory_t* create_directory(char* dirname, directory_t* parent) {
 directory_t* new_directory = malloc(sizeof(directory_t));
 if (new_directory == NULL) {
 printf("Failed to allocate memory for directory.\n");
 exit(1);
 }
 strcpy(new_directory->dirname, dirname);
 new_directory->parent = parent;
 new_directory->child = NULL;
 new_directory->next = NULL;
 new_directory->files = NULL;
 return new_directory;
}
/* Add a new child directory to the given directory */
void add_child_directory(directory_t* directory, char* dirname) {
 directory_t* new_directory = create_directory(dirname, directory);
 directory_t* current_directory = directory->child;
 if (current_directory == NULL) {
 directory->child = new_directory;
 } else {
 while (current_directory->next != NULL) {
 current_directory = current_directory->next;
 }
 current_directory->next = new_directory;
 }
}
/* Print the files in the given directory */
void print_files_in_directory(directory_t* directory) {
 printf("Directory %s:\n", directory->dirname);
 file_t* current_file = directory->files;
 if (current_file == NULL) {
 printf(" No files.\n");
 } else {
 while (current_file != NULL) {
 printf(" %s\n", current_file->filename);
 current_file = current_file->next;
 }
 }
}
/* Print the subdirectories of the given directory */
void print_subdirectories(directory_t* directory) {
 printf("Subdirectories of %s:\n", directory->dirname);
 directory_t* current_directory = directory->child;
 if (current_directory == NULL) {
 printf(" None.\n");
 } else {
 while (current_directory != NULL) {
 printf(" %s\n", current_directory->dirname);
 current_directory = current_directory->next;
 }
 }
}
/* Print the directory tree rooted at the given directory */
void print_directory_tree(directory_t* directory, int depth) {
 printf("%*s%s\n", depth * 2, "", directory->dirname);
 print_files_in_directory(directory);
 print_subdirectories(directory);
 directory_t* current_directory = directory->child;
 while (current_directory != NULL) {
 print_directory_tree(current_directory, depth + 1);
 current_directory = current_directory->next;
 }
}
int main() {
 /* Create the root directory */
 directory_t* root_directory = create_directory("root", NULL);
 /* Add some files to the root directory */
 add_file_to_directory(root_directory, "rootfile1.txt");
 add_file_to_directory(root_directory, "rootfile2.txt");
 /* Add some subdirectories to the root directory */
 add_child_directory(root_directory, "subdir1");
 add_child_directory(root_directory, "subdir2");
 /* Add some files and subdirectories to the subdirectories */
 directory_t* subdir1 = root_directory->child;
 add_file_to_directory(subdir1, "subdir1file1.txt");
 add_file_to_directory(subdir1, "subdir1file2.txt");
 add_child_directory(subdir1, "subdir1a");
 directory_t* subdir1a = subdir1->child;
 add_file_to_directory(subdir1a, "subdir1afile1.txt");
 directory_t* subdir2 = subdir1->next;
 add_file_to_directory(subdir2, "subdir2file1.txt");
 add_file_to_directory(subdir2, "subdir2file2.txt");
 add_child_directory(subdir2, "subdir2a");
 /* Print the directory tree */
 print_directory_tree(root_directory, 0);
 return 0;
}





// EXP Q3 Build and implement acyclic-structured directories.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct file {
 char* filename;
 struct file* next;
} file_t;
typedef struct directory {
 char* dirname;
 struct directory* parent;
 struct directory* child;
 struct directory* next_sibling;
 file_t* files;
} directory_t;
/* Create a new file with the given filename */
file_t* create_file(char* filename) {
 file_t* new_file = (file_t*)malloc(sizeof(file_t));
 new_file->filename = strdup(filename);
 new_file->next = NULL;
 return new_file;
}
/* Add a file to the given directory */
void add_file_to_directory(directory_t* directory, char* filename) {
 file_t* new_file = create_file(filename);
 if (directory->files == NULL) {
 directory->files = new_file;
 } else {
 file_t* current_file = directory->files;
 while (current_file->next != NULL) {
 current_file = current_file->next;
 }
 current_file->next = new_file;
 }
}
/* Create a new directory with the given dirname and parent directory */
directory_t* create_directory(char* dirname, directory_t* parent) {
 directory_t* new_directory = (directory_t*)malloc(sizeof(directory_t));
 new_directory->dirname = strdup(dirname);
 new_directory->parent = parent;
 new_directory->child = NULL;
 new_directory->next_sibling = NULL;
 new_directory->files = NULL;
 return new_directory;
}
/* Add a child directory to the given directory */
void add_child_directory(directory_t* directory, char* dirname) {
 directory_t* new_directory = create_directory(dirname, directory);
 if (directory->child == NULL) {
 directory->child = new_directory;
 } else {
 directory_t* current_directory = directory->child;
 while (current_directory->next_sibling != NULL) {
 current_directory = current_directory->next_sibling;
 }
 current_directory->next_sibling = new_directory;
 }
}
/* Print the files in the given directory */
void print_files_in_directory(directory_t* directory) {
 file_t* current_file = directory->files;
 while (current_file != NULL) {
 printf("%s/%s\n", directory->dirname, current_file->filename);
 current_file = current_file->next;
 }
}
/* Print the subdirectories of the given directory */
void print_subdirectories(directory_t* directory) {
 directory_t* current_directory = directory->child;
 while (current_directory != NULL) {
 printf("%s/\n", current_directory->dirname);
 current_directory = current_directory->next_sibling;
 }
}
/* Print the directory tree rooted at the given directory */
void print_directory_tree(directory_t* directory, int depth) {
 printf("%*s%s/\n", depth * 2, "", directory->dirname);
 print_files_in_directory(directory);
 print_subdirectories(directory);
 directory_t* current_directory = directory->child;
 while (current_directory != NULL) {
 print_directory_tree(current_directory, depth + 1);
 current_directory = current_directory->next_sibling;
 }
}
int main() {
 /* Create the root directory */
 directory_t *root_directory = create_directory("root", NULL);
 /* Add some files to the root directory */
 add_file_to_directory(root_directory, "rootfile1.txt");
 add_file_to_directory(root_directory, "rootfile2.txt");
 /* Add some subdirectories to the root directory */
 add_child_directory(root_directory, "subdir1");
 add_child_directory(root_directory, "subdir2");
/* Add some files to subdir1 */
 directory_t *subdir1 = root_directory->child;
 add_file_to_directory(subdir1, "subdir1file1.txt");
 add_file_to_directory(subdir1, "subdir1file2.txt");
/* Add a subdirectory to subdir1 */
 add_child_directory(subdir1, "subsubdir");
/* Add some files to subsubdir */
 directory_t *subsubdir = subdir1->child;
 add_file_to_directory(subsubdir, "subsubdirfile1.txt");
/* Print the directory tree */
 print_directory_tree(root_directory, 0);
 return 0;
}




// EXP !! Implement the concepts of Sequential list, Linked List and Indexed File 
// allocations
#include <stdio.h>
#define MAX_SIZE 100
int arr[MAX_SIZE];
int last = -1;
void insert(int data) {
 if (last >= MAX_SIZE - 1) {
 printf("Error: Overflow\n");
 return;
 }
 arr[++last] = data;
}
void delete(int data) {
 int i, pos = -1;
 for (i = 0; i <= last; i++) {
 if (arr[i] == data) {
 pos = i;
 break;
 }
 }
 if (pos == -1) {
 printf("Error: Element not found\n");
 return;
 }
 for (i = pos; i < last; i++) {
 arr[i] = arr[i + 1];
 }
 last--;
}
void search(int data) {
 int i, pos = -1;
 for (i = 0; i <= last; i++) {
 if (arr[i] == data) {
 pos = i;
 break;
 }
 }
 if (pos == -1) {
 printf("Element not found\n");
 } else {
 printf("Element found at position %d\n", pos);
 }
}
void display() {
 int i;
 if (last == -1) {
 printf("List is empty\n");
 return;
 }
 printf("List elements are: ");
 for (i = 0; i <= last; i++) {
 printf("%d ", arr[i]);
 }
 printf
(
"
\n");
}
int main()
{
 insert
(
1);
 insert
(
2);
 insert
(
3);
 insert
(
4);
 insert
(
5);
 display();
 delete
(
3);
 display();
 search
(
4);
 search
(
6);
 return
0
;
}



// EXP 11 (ii)Linked file allocation:
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node* next;
};
struct node* head = NULL;
void insert(int data) {
 struct node* new_node = (struct node*)malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = NULL;
 if (head == NULL) {
 head = new_node;
 } else {
 struct node* temp = head;
 while (temp->next != NULL) {
 temp = temp->next;
 }
 temp->next = new_node;
 }
}
void delete(int data) {
 if (head == NULL) {
 printf("Error: List is empty\n");
 return;
 }
 struct node* temp = head;
 struct node* prev = NULL;
 while (temp != NULL && temp->data != data) {
 prev = temp;
 temp = temp->next;
 }
 if (temp == NULL) {
 printf("Error: Element not found\n");
 return;
 }
 if (prev == NULL) {
 head = temp->next;
 } else {
 prev->next = temp->next;
 }
 free(temp);
}
void search(int data) {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 struct node* temp = head;
 int pos = 0;
 while (temp != NULL && temp->data != data) {
 temp = temp->next;
 pos++;
 }
 if (temp == NULL) {
 printf("Element not found\n");
 } else {printf("Element found at position %d\n", pos);
 }
}
void display() {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 printf("List elements are: ");
 struct node* temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
}
int main() {
 insert(1);
 insert(2);
 insert(3);
 insert(4);
 insert(5);
 display();
 delete(3);
 display();
 search(4);
 search(6);
 return 0;
}



// EXP 11 (iii) Indexed file allocation
#include <stdio.h>
#include <stdlib.h>
#define BLOCK_SIZE 4
#define FILE_SIZE 12
struct index_entry {
 int start_block;
 int end_block;
};
struct index_entry index_table[FILE_SIZE / BLOCK_SIZE];
int next_block = 0;
void allocate_blocks(int num_blocks) {
 if (next_block + num_blocks > FILE_SIZE / BLOCK_SIZE) {
 printf("Error: Not enough free blocks\n");return;
 }
 int i;
 index_table[next_block / BLOCK_SIZE].start_block = next_block;
 for (i = next_block; i < next_block + num_blocks - 1; i++) {
 index_table[i / BLOCK_SIZE].end_block = i;
 }
 index_table[i / BLOCK_SIZE].end_block = i;
 next_block += num_blocks;
}
void free_blocks(int start_block) {
 int i, j;
 for (i = 0; i < FILE_SIZE / BLOCK_SIZE; i++) {
 if (index_table[i].start_block == start_block) {
 for (j = i; j < FILE_SIZE / BLOCK_SIZE - 1; j++) {
 index_table[j].start_block = index_table[j + 1].start_block;
 index_table[j].end_block = index_table[j + 1].end_block;
 }
 index_table[j].start_block = index_table[j].end_block = -1;
 next_block -= (index_table[i].end_block - index_table[i].start_block +
1);
 return;
 }
 }
 printf("Error: Block not found\n");
}
void display_index_table() {
 printf("Index table entries are: ");
 int i;
 for (i = 0; i < FILE_SIZE / BLOCK_SIZE; i++) {
 printf("(%d,%d) ", index_table[i].start_block, index_table[i].end_block);
 }
 printf("\n");
}
int main() {
 allocate_blocks(3);
 display_index_table();
 allocate_blocks(2);
 display_index_table();
 free_blocks(4);
 display_index_table();
 free_blocks(1);
 display_index_table();
 return 0;
}




// EXP (12) Implement the concepts of Sequential list, Linked List and Indexed File 
// allocations
// (i)  FCFS disk scheduling algorithm
#include<stdio.h>
#include<stdlib.h>
int main() {
 int queue[100], head, seek=0, n, diff;
 float avg;
 printf("Enter the size of queue: ");
 scanf("%d",&n);
 printf("Enter the queue: ");
 for(int i=0; i<n; i++) {
 scanf("%d",&queue[i]);
 }
 printf("Enter the initial head position: ");
 scanf("%d",&head);
 queue[n]=head;
 for(int i=0; i<=n; i++) {
 diff=abs(queue[i]-queue[i-1]);
 seek+=diff;
 printf("Move from %d to %d with seek %d\n",queue[i1],queue[i],diff);
 }
 avg=(float)seek/n;
 printf("Average seek time = %f",avg);
 return 0;
}



// EXP 12 (ii) SCAN disk scheduling algorithm
#include<stdio.h>
#include<stdlib.h>
int main() {
 int queue[100], head, seek=0, n, end, max;
 float avg;
 printf("Enter the size of queue: ");
 scanf("%d",&n);
 printf("Enter the queue: ");
 for(int i=0; i<n; i++) {
 scanf("%d",&queue[i]);
 }
 printf("Enter the initial head position: ");
 scanf("%d",&head);
 printf("Enter the size of disk: ");
 scanf("%d",&end);
 queue[n]=head;
 n++;
 max=end-1;
 for(int i=0; i<n; i++) {
 for(int j=i+1; j<n; j++) {
 if(queue[i]>queue[j]) {
 int temp=queue[i];
 queue[i]=queue[j];
 queue[j]=temp;
 }
 }
 }
 int pos;
 for(int i=0; i<n; i++) {
 if(queue[i]==head) {
 pos=i;
 break;
 }
 }
 for(int i=pos; i>=0; i--) {
 seek+=abs(queue[i]-queue[i-1]);
 printf("Move from %d to %d with seek %d\n",queue[i],queue[i1],abs(queue[i]-queue[i-1]));
 }
 seek+=queue[pos+1];
 printf("Move from %d to %d with seek
%d\n",queue[pos],queue[pos+1],queue[pos+1]-queue[pos]);
 for(int i=pos+1; i<n-1; i++) {
 seek+=abs(queue[i]-queue[i+1]);
 printf("Move from %d to %d with seek
%d\n",queue[i],queue[i+1],abs(queue[i]-queue[i+1]));
 }
 avg=(float)seek/n;
 printf("Average seek time = %f",avg);
 return 0;
}



























