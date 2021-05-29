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

struct processB{
	int id;
	int* allocation;
	int* max;
	int* need;
	int resources;
	int index;
};
typedef struct processB *ProcessB;

ProcessB newProcessB(int id, int resources, int allocation[resources], int max[resources]);
void displayProcessB(ProcessB pb);
void destroyProcessB(ProcessB *pb);

struct processListB{
	ProcessB* plb;
	int count;
	int size;
	int resources;
	int* available;
	int* safeSequence; 
};
typedef struct processListB *ProcessListB;

ProcessListB newProcessListB(int size, int resources);
void addPProcessB(ProcessListB plb, ProcessB pb);
void addCProcessB(ProcessListB plb,int id, int resources, int allocation[resources], int max[resources]);
void declareAvailable(ProcessListB plb,int available[]);
void processBBankersAlgo(ProcessListB plb);
void displayProcessListB(ProcessListB plb);
void destroyProcessListB(ProcessListB *plb);


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
