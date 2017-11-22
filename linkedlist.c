#include  "linkedlist.h"

int add_to_list(linked_list *ll, char *s)
{
int i=0;
while(ll->next != NULL)
{
ll= ll->next;
i++;
}
ll->next = (linked_list* )malloc(sizeof(linked_list));
ll->next->data = s;
i++;
ll->index = i;
ll->next->next = NULL;
return i;
}

int display_item(linked_list *ll)
{
if(ll->data != NULL)
{
printf("data: %s\n", ll->data);
ll = ll->next;
return 0;
}
else
return -1;
}

int display_list(linked_list *ll)
{
int i=0;
while(ll->next != NULL)
{
ll=ll->next;
display_item(ll);
i++;
}
return i;
}
/*************************************************************/
int linkedlist_status(linked_list *ll)
{
int i=0;
if(ll->next != NULL)
{
ll=ll->next;
display_list(ll);
ll=ll->next;
printf("TESTIdata: %s\n", ll->data);
//return i;
}
else return -1;
}
/************************************************************/
/*
linked_list * search_from_list(linked_list *ll, char *s)
{

}

int delete_from_list(linked_list *ll, int index);
{

}
*/
