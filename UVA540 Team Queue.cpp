#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

struct node
{
	long long int data;
	long long int num = 0;
	node *back;
	node *next;
};

int main()
{
    int n = 0;
    int testnum = 0;
    long long int temp = 0;

    char cmd[10] = {0};
    long long int data;
    int time = 1;



    while(scanf("%d",&n) && n)
    {
 		node *head =new node;
		head->back = NULL;
		head->data = 0;
		head->next = NULL;
		node *ptr = NULL;
		node *nptr = NULL; 
		while(n--)
        {
            scanf("%d",&testnum);
            
			while(testnum--)
            {
                scanf("%lld", &temp);
				
				if(head->data == 0)
				{

					head->data = temp;
					head->num++;
					head->back = NULL;
					head->next = NULL;
				}
				else
				{
					ptr = head;
					while(ptr->next != NULL)
					{
						ptr = ptr->next;
					}
					nptr = new node;
					nptr->data = temp;
					nptr->num++;
					nptr->next = NULL;
					nptr->back = ptr;
					ptr->next = nptr;

					ptr = ptr->next;
				}
            }
        }

        printf("Scenario #%d\n",time++);
        while(gets(cmd))
        {

            //printf("%s %d",cmd, data);
            if(!strcmp(cmd,"ENQUEUE"))
            {
                scanf("%lld",&data);
				node *lptr = head;
                ptr = head;
				bool flag = false;
				while(ptr->next != NULL)
				{
					
					if(ptr->data == data && flag == false)
					{
						nptr = new node;
						nptr->data = data;
						nptr->num++;
						nptr->next = ptr;
						nptr->back = lptr;
						lptr->next = nptr;
						ptr->back = nptr;
						flag = true;
						break;
					}
					lptr = ptr;
					ptr = ptr->next;
				}
				if(flag == false)
				{
					nptr = new node;
					nptr->data = data;
					nptr->num++;		
					nptr->back = ptr;
					nptr->next =NULL;
					ptr->next = nptr;
				}
            }
            else if(!strcmp(cmd,"DEQUEUE"))
            {
				ptr = head;
				if(ptr->num <= 0)
				{
					node *temp = head;
					head = temp->next;
					free(temp);
				}
				else
				{
				printf("%lld\n",ptr->data);		
				ptr->num--;
				}

            }
            else if(!strcmp(cmd,"STOP"))
            {
                printf("\n");
                break;
            }
        }
		ptr = head;

		while(ptr->next != NULL)
		{
			ptr->data = 0;
		}
    }
    return 0;
}