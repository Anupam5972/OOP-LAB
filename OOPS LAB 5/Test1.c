#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Linked list node
    struct node
    {
        int info;
        struct node *link;
    };
    struct node *start = NULL;
    // Function to traverse the linked list
    void traverse()
    {
        struct node *temp;
        // List is empty
        if (start == NULL)
            printf("\nList is empty\n");
        // else print the linked list
        else
        {
            temp = start;
            while (temp != NULL)
            {
                printf("Data = %d\n", temp->info);
                temp = temp->link;
            }
        }
    }
    // Function to insert node after the data
    void insertafterdata()
    {
        int data;
        struct node *temp, *head;
        temp = malloc(sizeof(struct node));
        // enter the number
        printf("\nEnter the number to be inserted : ");
        scanf("%d", &data);
        // changes links
        temp->link = 0;
        temp->info = data;
        head = start;
        while (head->link != NULL)
        {
            head = head->link;
        }
        head->link = temp;
    }
    // Function to insert node before the data
    void insertbeforedata()
    {
        int data;
        struct node *temp;
        temp = malloc(sizeof(struct node));
        printf("\nEnter number to be inserted : ");
        scanf("%d, &data");
        temp->info = data;
        // pointer of temp will be assigned to start
        temp->link = start;
        start = temp;
    }
    // Function to delete after the data
    void deleteafterdata()
    {
        struct node *temp, *prevnode;
        if (start == NULL)
            printf("\nList is empty\n");
        else
        {
            temp = start;
            while (temp->link != 0)
            {
                prevnode = temp;
                temp = temp->link;
            }
            free(temp);
            prevnode->link = 0;
        }
    }
    // Function to delete before data
    void deletebeforedata()
    {
        struct node *temp;
        if (start == NULL)
            printf("\nList is empty\n");
        else
        {
            temp = start;
            start = start->link;
            free(temp);
        }
    }
    void insertatAnyPosition()
    {
        struct node *temp, *newnode;
        int pos, data, i = 1;
        newnode = malloc(sizeof(struct node));
        // Enter the postion and data
        printf("\nEnter position and data : ");
        scanf("%d %d", &pos, &data);
        // Change Links
        temp = start;
        newnode->info = data;
        newnode->link = 0;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
    // Function to delete from any specified
    // position from the linked list
    void deleteatAnyPosition(int ele)
    {
        if (head == NULL)
        {
            printf("List if Empty, Deletion is not Possible");
        }
        else
        {
            struct node *p, *next;
            ptr = head;
            while (ptr->data != ele)
            {
                p = ptr;
                ptr = ptr->next;
            }
            p->next = ptr->next;
            free(ptr);
        }
    }
    void search(int num, struct node *head)
    {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            if (ptr->data == num)
            {
                printf("Success");
                return;
            }
            ptr = ptr->next;
        }
        printf("Search not successful");
    }
    void sorting()
    {
        struct node *ptr, *cpt, int temp;
        ptr = head;
        while (ptr->lin != NULL)
        {
            cpt = ptr->link;
            while (cpt != NULL)
            {
                if (ptr->into > cpt->info)
                    [temp = ptr->info;
                        ptr->info = cpt->info;
                        cpt->info = temp;
                    ] cpt = cpt->link;
            }
            ptr = ptr->link;
        }
    }
    void print(struct Node * p)
    {
        if (p == NULL)
        {
            printf("\n");
            return; // Exit condition
        }
        printf("%d", p->data); //First print value in the node
        print(p->next);        //Recursive call
    }
    void reverse(struct node * head)
    {
        struct node *prev = NULL;
        struct node *next = NULL;
        while (head != NULL)
        {
            next = head->link;
            head->link = prev;
            prev = head;
            head = next;
        }
        head = prev;
        return head;
    }
    int main()
    {
        int choice;
        while (1)
        {

            printf("\n\t1  To see list\n");
            printf("\t2  For insertion at"
                   " end\n");
            printf("\t3  For insertion at"
                   " start\n");
            printf("\t4  For deletion at "
                   "end\n");
            printf("\t5  For deletion of "
                   "first element\n");
            printf("\t6  For insertion "
                   "certain position\n");
            printf("\t7  For deletion at "
                   " certain position\n");
            printf("\t8  To search an"
                   " elements\n");
            printf("\t9  To sort elements\n");
            printf("\t10 To print element in the reverse order\n");
            printf("\t11 To reverse the "
                   "linked list\n");
            printf("\t12 To exit\n");
            printf("\nEnter Choice :\n");
            scanf("%d ", &choice);

            switch (choice)
            {
            case 1:
                traverse();
                break;
            case 2:
                insertafterdata();
                break;
            case 3:
                insertbeforedata();
                break;
            case 4:
                deleteafterdata();
                break;
            case 5:
                deletebeforedata();
                break;
            case 6:
                insertatAnyPosition();
                break;
            case 7:
                deleteatAnyPosition();
                break;
            case 8:
                search();
                break;
            case 9:
                sorting();
                break;
            case 10:
                print();
                break;
            case 11:
                reverse();
                break;
            case 12:
                exit(1);
                break;
            default:
                printf("Incorrect Choice\n");
            }
        }
        
    
    }