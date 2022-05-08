#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/*struct node {
int data;
int key;
struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
//display the list
void printList() {
struct node *ptr = head;
printf("\n[ ");
//start from the beginning
while(ptr != NULL) {
printf("(%d,%d) ",ptr->key,ptr->data);
ptr = ptr->next;
}
printf(" ]");
}
//insert link at the first location
void insertFirst(int key, int data) {
//create a link
struct node *link = (struct node*) malloc(sizeof(struct node));
link->key = key;
link->data = data;
//point it to old first node
link->next = head;
//point first to new first node
head = link;
}
//delete first item
struct node* deleteFirst() {
//save reference to first link
struct node *tempLink = head;
//mark next to first link as first
head = head->next;
//return the deleted link
return tempLink;
}
//is list empty
bool isEmpty() {
return head == NULL;
}
int length() {
int length = 0;
struct node *current;
for(current = head; current != NULL; current = current->next) {
length++;
}
return length;
}
//find a link with given key
struct node* find(int key) {
//start from the first link
struct node* current = head;
//if list is empty
if(head == NULL) {
return NULL;
}
//navigate through list
while(current->key != key) {
//if it is last node
if(current->next == NULL) {
return NULL;
} else {
//go to next link
current = current->next;
}
}
//if data found, return the current Link
return current;
}
//delete a link with given key
struct node* deletee(int key) {
//start from the first link
struct node* current = head;
struct node* previous = NULL;
//if list is empty
if(head == NULL) {
return NULL;
}
//navigate through list
while(current->key != key) {
//if it is last node
if(current->next == NULL) {
return NULL;
} else {
//store reference to current link
previous = current;
//move to next link
current = current->next;
}
}
//found a match, update the link
if(current == head) {
//change first to point to next link
head = head->next;
} else {
//bypass the current link
previous->next = current->next;
}
return current;
}
void sort() {
int i, j, k, tempKey, tempData;
struct node *current;
struct node *next;
int size = length();
k = size ;
for ( i = 0 ; i < size - 1 ; i++, k-- ) {
current = head;
next = head->next;
for ( j = 1 ; j < k ; j++ ) {
if ( current->data > next->data ) {
tempData = current->data;
current->data = next->data;
next->data = tempData;
tempKey = current->key;
current->key = next->key;
next->key = tempKey;
}
current = current->next;
next = next->next;
}
}
}
void reverse(struct node** head_ref) {
struct node* prev = NULL;
struct node* current = *head_ref;
struct node* next;
while (current != NULL) {
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head_ref = prev;
}
int main() {
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("Original List: ");
//print list
printList();
while(!isEmpty()) {
struct node *temp = deleteFirst();
printf("\nDeleted value:");
printf("(%d,%d) ",temp->key,temp->data);
}
printf("\nList after deleting all items: ");
printList();
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("\nRestored List: ");
printList();
printf("\n");
struct node *foundLink = find(4);
if(foundLink != NULL) {
printf("Element found: ");
printf("(%d,%d) ",foundLink->key,foundLink->data);
printf("\n");
} else {
printf("Element not found.");
}
deletee(4);
printf("List after deleting an item: ");
printList();
printf("\n");
foundLink = find(4);
if(foundLink != NULL) {
printf("Element found: ");
printf("(%d,%d) ",foundLink->key,foundLink->data);
printf("\n");
} else {
printf("Element not found.");
}
printf("\n");
sort();
printf("List after sorting the data: ");
printList();
reverse(&head);
printf("\nList after reversing the data: ");
printList();
}*/
/*struct node {
int data;
int key;
struct node *next;
struct node *prev;
};
//this link always point to first Link
struct node *head = NULL;
//this link always point to last Link
struct node *last = NULL;
struct node *current = NULL;
//is list empty
bool isEmpty() {
return head == NULL;
}
int length() {
int length = 0;
struct node *current;
for(current = head; current != NULL; current = current->next){
length++;
}
return length;
}
//display the list in from first to last
void displayForward() {
//start from the beginning
struct node *ptr = head;
//navigate till the end of the list
printf("\n[ ");
while(ptr != NULL) {
printf("(%d,%d) ",ptr->key,ptr->data);
ptr = ptr->next;
}
printf(" ]");
}
//display the list from last to first
void displayBackward() {
//start from the last
struct node *ptr = last;
//navigate till the start of the list
printf("\n[ ");
while(ptr != NULL) {
//print data
printf("(%d,%d) ",ptr->key,ptr->data);
//move to next item
ptr = ptr ->prev;
}
}
//insert link at the first location
void insertFirst(int key, int data) {
//create a link
struct node *link = (struct node*) malloc(sizeof(struct node));
link->key = key;
link->data = data;
if(isEmpty()) {
//make it the last link
last = link;
} else {
//update first prev link
head->prev = link;
}
//point it to old first link
link->next = head;
//point first to new first link
head = link;
}
//insert link at the last location
void insertLast(int key, int data) {
	//create a link
struct node *link = (struct node*) malloc(sizeof(struct node));
link->key = key;
link->data = data;
if(isEmpty()) {
//make it the last link
last = link;
} else {
//make link a new last link
last->next = link;
//mark old last node as prev of new link
link->prev = last;
}
//point last to new last node
last = link;
}
//delete first item
struct node* deleteFirst() {
//save reference to first link
struct node *tempLink = head;
//if only one link
if(head->next == NULL){
last = NULL;
} else {
head->next->prev = NULL;
}
head = head->next;
//return the deleted link
return tempLink;
}
//delete link at the last location
struct node* deleteLast() {
//save reference to last link
struct node *tempLink = last;
//if only one link
if(head->next == NULL) {
head = NULL;
} else {last->prev->next = NULL;
}
last = last->prev;
//return the deleted link
return tempLink;
}
//delete a link with given key
struct node* deletee(int key) {
//start from the first link
struct node* current = head;
struct node* previous = NULL;
//if list is empty
if(head == NULL) {
return NULL;
}
//navigate through list
while(current->key != key) {
//if it is last node
if(current->next == NULL) {
return NULL;
} else {
//store reference to current link
previous = current;
//move to next link
current = current->next;
}
}
//found a match, update the link
if(current == head) {
//change first to point to next link
head = head->next;
} else {
//bypass the current link
current->prev->next = current->next;
}
if(current == last) {
//change last to point to prev link
last = current->prev;
} else {
current->next->prev = current->prev;
}
return current;
}
bool insertAfter(int key, int newKey, int data) {
//start from the first link
struct node *current = head;
//if list is empty
if(head == NULL) {
return false;
}
//navigate through list
while(current->key != key) {
//if it is last node
if(current->next == NULL) {
return false;
} else {
//move to next link
current = current->next;
}
}
//create a link
struct node *newLink = (struct node*) malloc(sizeof(struct
node));
newLink->key = newKey;
newLink->data = data;
if(current == last) {
newLink->next = NULL;
last = newLink;
} else {
newLink->next = current->next;
current->next->prev = newLink;
}
newLink->prev = current;
current->next = newLink;
return true;
}
int main() {
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("\nList (First to Last): ");
displayForward();
printf("\n");
printf("\nList (Last to first): ");
displayBackward();
printf("\nList , after deleting first record: ");
deleteFirst();
displayForward();
printf("\nList , after deleting last record: ");
deleteLast();
displayForward();
printf("\nList , insert after key(4) : ");
insertAfter(4,7, 13);
displayForward();
printf("\nList , after delete key(4) : ");
deletee(4);
displayForward();
}*/
struct node {
int data;
int key;
struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
bool isEmpty() {
return head == NULL;
}
int length() {
int length = 0;
//if list is empty
if(head == NULL) {
return 0;
}
current = head->next;
while(current != head) {
length++;
current = current->next;
}
return length;
}
//insert link at the first location
void insertFirst(int key, int data) {
//create a link
struct node *link = (struct node*) malloc(sizeof(struct node));
link->key = key;
link->data = data;
if (isEmpty()) {
	head = link;
head->next = head;
} else {
//point it to old first node
link->next = head;
//point first to new first node
head = link;
}
}
//delete first item
struct node * deleteFirst() {
//save reference to first link
struct node *tempLink = head;
if(head->next == head) {
head = NULL;
return tempLink;
}
//mark next to first link as first
head = head->next;
//return the deleted link
return tempLink;
}
//display the list
void printList() {
struct node *ptr = head;
printf("\n[ ");
//start from the beginning
if(head != NULL) {
while(ptr->next != ptr) {
printf("(%d,%d) ",ptr->key,ptr->data);
ptr = ptr->next;
}
}
printf(" ]");
}
int main() {
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("Original List: ");
//print list
printList();
while(!isEmpty()) {
struct node *temp = deleteFirst();
printf("\nDeleted value:");
printf("(%d,%d) ",temp->key,temp->data);
}
printf("\nList after deleting all items: ");
printList();
}








