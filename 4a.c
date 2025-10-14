#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};
// *head;

// struct Node *head;

struct Node *getNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->info = data;
    return temp;
}

void traverse(struct Node *head)
{
    if (head == NULL)
    {
        printf("Empty List");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

void insertBeg(struct Node **head, int info)
{
    struct Node *newNode = getNode(info);
    newNode->next = *head;
    *head = newNode;
}

void insertlast(struct Node**head,int data)
{
    struct Node*newNode=getNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct Node*temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
}
/*
Node *search(Node *&head, int data)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->info == data)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

void insertAfter(Node *&head, int data, int info)
{
    Node *temp = search(head, data);
    if (temp == nullptr)
    {
        cout  data  " not found" ;
        return;
    }
    Node *newNode = new Node(info);
    newNode->next = temp->next;
    temp->next = newNode;
}

void removeBeg(Node *&head)
{
}
void removeLast(Node *&head)
{
}
void removeAfter(Node *&head, Node *current)
{
}
*/
int main()
{
    struct Node *head = NULL;
    int ch, info;
    do
    {
        printf("\n1.........Add Begining"
               "\n2.........Add Last"
               "\n3.........Add After"
               "\n4.........Remove Begining"
               "\n5.........Remove Last"
               "\n6.........Remove After"
               "\n7.........Search"
               "\n8.........Show"
               "\n9.........Exit"
               "\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter info: ");
            scanf("%d", &info);
            insertBeg(&head, info);
            break;
            /*
        case 2:
            cout "Enter info: ";
            cin >> info;
            cout "unimplementd";
            break;
        case 3:
            cout "unimplementd";
            break;
        case 4:
            cout "unimplementd";
            break;
        case 5:
            cout "unimplementd";
            break;
        case 6:
            cout "unimplementd";
            break;
        case 7:
            cout "unimplementd";
            break;
            */
        case 8:
            traverse(head);
            break;
        case 9:
            printf("See you later");
            break;
        default:
            printf("Not defined yet");
        }
    } while (ch != 9);
}