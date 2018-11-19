#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    void *data[100];
};
int push(struct stack *s, void *item)
{
    if(s->top==(s->size-1))
    {
        return 0;
    }
    else
    {
        s->top++;
        s->data[s->top]=item;
        printf("pushed\n");
        return 1;
    }
}
void *pop(struct stack *s, int *error)
{
    void *temp;
    if(s->top==-1)
    {
        *error = 1;
    }
    else
    {
        temp=s->data[s->top];
        s->top--;
        return temp;
    }
}
 void display_int(struct stack s)
 {
   int i;
   printf("int stack \n");
   for(i=s.top;i>=0;i--)
   {
        printf("%d\n",*(int *)s.data[i]);

   }

 }
 void display_float(struct stack f)
 {
     int  j;
     printf("float stack\n"); 
     for(j=f.top;j>=0;j--)
     {
          printf("%f\n",*(float*)f.data[j]);
     }
 }
 void display_str(struct stack c)
 {
     int k;
     printf("String Stack\n");
     for(k=c.top;k>=0;k--)
     {
         printf("%s\n",c.data[k]);
     }
 }

void main()
{
    int error=0,item[100],n,h,x,choice=0;
    char sitem[100][100]; 
    float fitem[100];
    int type; 
    struct stack s={-1,100};
    struct stack f={-1,100};
    struct stack c={-1,100};
    printf("STACK MENU");
    while(choice!=4)
    {
	    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	    printf("Enter the choice \n");
	    scanf("%d",&choice);
	    switch(choice)
 	  	 {
                    case 1: 
                            printf("Enter element type 0-int, 1-float, 2-string\n");
                            scanf("%d", &type);
                            int ii,ifl,is=0;
                            switch(type) 
			    {
                               case 0:
                                   scanf("%d",&item[ii]);
				   push(&s,&item[ii]);
				   break;
			       case 1:
                                   scanf("%f",&fitem[ifl]);
				   push(&f,&fitem[ifl]);
				   break;
			       case 2:
                                   scanf("%s",sitem[is]);
				   push(&c,sitem[is]);
				   break;
			       default:
				   break;
			     }
			     break;	
		    case 2:  
                            printf("Enter element type 0-int, 1-float, 2-string\n");
                            scanf("%d", &type);
                            switch(type) 
			    {
                               case 0:
				   pop(&s,&error);
				   break;
			       case 1:
				   pop(&f,&error);
				   break;
			       case 2:
				   pop(&c,&error);
				   break;
			       default:
				   break;
			    }
			    break;

		    case 3: display_int(s);
 		            display_float(f);
		            display_str(c);
                            break;
	 	    case 4: exit(0);
        	            break;

		    default : printf("INVALID OPTION OF CHOICE");
		              break;

    }
  }
}



