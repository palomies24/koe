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
int x=0;
while(ll->prev != NULL)
{
ll= ll->prev;
x++;
}
ll->prev = (linked_list* )malloc(sizeof(linked_list));
ll->prev->data = s;
x++;
ll->index = x;
ll->next->next = NULL;
return x;


}
int display_item(linked_list *ll)
{
if(ll->data != NULL)
{
printf("data: %s\n%s\n", ll->data, ll->index);
ll = ll->next;
ll = ll->prev;

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

int x=0;
while(ll->prev != NULL)
{
ll=ll->prev;
display_item(ll);
x++;
}
return x;

}
