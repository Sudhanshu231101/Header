struct node
{
int data;
node* next;
}

node* head;

void addNode(int data)
{
struct node* newNode = (struct node*)malloc(sizeof(struct node));
node->data = data;
if(head==NULL)
{
head->next = newNode;
}
else
{
node* temp = head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next = newNode;
}
}

void traverse()
{
  node* temp = head;
  if(head==NULL){
    printf("The linked list is empty");
  }
  else{
    while(temp!=NULL){
      printf("%d",temp->data);
      temp=temp->data;
  }
}

  

  
    




