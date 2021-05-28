#ifndef BANKERS_H
#define BANKERS

struct process{
	int id;
	int at;
	int bt;
	int wt;
	int tat;
	int index;
};
typedef struct process *Process;

Process newProcess(int id, int at, int bt, int wt, int tat);
void displayProcess(Process p);
void destroyProcess(Process *p);

struct processList{
	Process* pl;
	int count;
	int size;
};
typedef struct processList *ProcessList;

ProcessList newProcessList(int size);
void addPProcess(ProcessList pl, Process p);
void addCProcess(ProcessList pl, int id, int at, int bt, int wt, int tat);
void displayProcessList(ProcessList pl);
void insertionSort(int arr[], int n);
void processFCFS(ProcessList pl);
void processSJF(ProcessList pl);
void processSRTF(ProcessList pl);
void processRR(ProcessList pl, int quantum);
void processNPP(ProcessList pl);
void processHRRN(ProcessList pl);
void destroyProcessList(ProcessList *pl);

typedef struct node *nodeptr;
struct node{
	Process p;
	nodeptr prev;
	nodeptr next;
};
struct queue{
	nodeptr front;
	nodeptr rear;
	int count;
};
typedef struct queue *Queue;
typedef Process qItem;

Queue newQueue();
void enqueue(Queue q, qItem item);
void dequeue(Queue q);
void sortQueue(Queue q);
void removeItem(Queue q, qItem item);
int isEmpty(Queue q);
void clear(Queue q);
qItem head(Queue q);
qItem tail(Queue q);
int contains(Queue q, qItem x);
void display(Queue q);
void destroy(Queue *q);

#endif
