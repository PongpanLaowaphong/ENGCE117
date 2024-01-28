#include <stdio.h>
#include <string.h>

struct Number {
    char NumberInfo[20];
    struct Number *next;
};

const int MAX_NODES = 100;
Number nodes[MAX_NODES];
int nodeCount = 0;

void ShowAll(struct Number *walk);
struct Number *AddNode(struct Number **walk, char *NumberInfo);
void InsNode(struct Number *walk, char *NumberInfo);
void DelNode(struct Number **walk);
void SwapNodes(struct Number **start, char *data1, char *data2);

int main() {
	
	printf("Pongpan Laowaphong 66543206019-2\n");
	printf("All number in this node \n\n");
    struct Number *start, *now;
    start = NULL;
    now = AddNode(&start, "one");
    now = AddNode(&start, "two");
    InsNode(now, "three");
    InsNode(now, "four");
    SwapNodes(&start, "three", "four");
    ShowAll(start);
    
	printf("\n");
	
	int x ;
	int y ;
	
	do {
	
		printf( "What node do you want to swap ? [First node] [1,2,3,4] : ");
		scanf("%d", &x);
		printf( "What node do you want to swap ? [Second node] [1,2,3,4] : ");
		scanf("%d", &y);
		
		if ( x >= 1 && x <= 4 && y >= 1 && y <= 4  ){
			
			if ( x == 1 ) {
				
				if ( y == 1 ) {
					
					SwapNodes(&start, "one", "one");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 2 ) {
					
					SwapNodes(&start, "one", "two");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 3 ) {
					
					SwapNodes(&start, "one", "three");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 4 ) {
					
					SwapNodes(&start, "one", "four");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}
				
			}else if ( x == 2 ) {
				
				if ( y == 1 ) {
					
					SwapNodes(&start, "two", "one");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 2 ) {
					
					SwapNodes(&start, "two", "two");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 3 ) {
					
					SwapNodes(&start, "two", "three");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 4 ) {
					
					SwapNodes(&start, "two", "four");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}
				
			}else if ( x == 3 ) {
				
				if ( y == 1 ) {
					
					SwapNodes(&start, "three", "one");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 2 ) {
					
					SwapNodes(&start, "three", "two");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 3 ) {
					
					SwapNodes(&start, "three", "three");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 4 ) {
					
					SwapNodes(&start, "three", "four");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}
				
			}else if ( x == 4 ) {
				
				if ( y == 1 ) {
					
					SwapNodes(&start, "four", "one");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 2 ) {
					
					SwapNodes(&start, "four", "two");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 3 ) {
					
					SwapNodes(&start, "four", "three");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}else if ( y == 4 ) {
					
					SwapNodes(&start, "four", "four");
					printf("\nYour answer is : ");
					ShowAll(start);
					break;
					
				}
				
			}
			
		}else{
			
			printf("\nSome node is higher than 4 and lower than 1 \nPlease try again !!! \n\n");
			
		}
		
	}while(true);

    return 0;
}

void ShowAll(struct Number *walk) {
    while (walk != NULL) {
        printf("%s ", walk->NumberInfo);
        walk = walk->next;
    }
    printf("\n");
}

struct Number *AddNode(struct Number **walk, char *NumberInfo) {

    while (*walk != NULL) {
        walk = &(*walk)->next;
    }

    *walk = &nodes[nodeCount++];
    strcpy((*walk)->NumberInfo, NumberInfo);
    (*walk)->next = NULL;

    return *walk;
}

void InsNode(struct Number *walk, char *NumberInfo) {
  
    struct Number *newNode = &nodes[nodeCount++];
    strcpy(newNode->NumberInfo, NumberInfo);
    newNode->next = walk->next;
    walk->next = newNode;
}

void DelNode(struct Number **walk) {

    struct Number *temp = (*walk)->next;

    if (temp != NULL) {
        (*walk)->next = temp->next;
    }
}

void SwapNodes(struct Number **start, char *data1, char *data2) {
	
    if (strcmp(data1, data2) == 0) {
        return;
    }

    struct Number *prev1 = NULL, *curr1 = *start;
    struct Number *prev2 = NULL, *curr2 = *start;

    while (curr1 != NULL && strcmp(curr1->NumberInfo, data1) != 0) {
        prev1 = curr1;
        curr1 = curr1->next;
    }

    while (curr2 != NULL && strcmp(curr2->NumberInfo, data2) != 0) {
        prev2 = curr2;
        curr2 = curr2->next;
    }

    if (prev1 != NULL) {
        prev1->next = curr2;
    } else {
        *start = curr2;
    }

    if (prev2 != NULL) {
        prev2->next = curr1;
    } else {
        *start = curr1;
    }

    struct Number *temp = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp;
}
