#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 150000

typedef struct man
{

    int id;
    struct man *next;

} man;

int prime[N];

void check(void)
{
    long long i,j;


    for(i=0; i<N; i++)
    {
        prime[i]=1;
    }

    prime[0]=0;
    prime[1]=0;



    for(i=2; i<N; i++)
    {
        if(prime[i])
            for(j=i*i; j<N; j+=i)
                prime[j]=0;



    }

  //  prime[0]=1;
  //  prime[1]=1;
  //  prime[2]=1;
  //  prime[3]=1;



}

int main(void)
{
    int i,j,k,n,m,remain;

    man *head, *curr, *tmp;

           check();
    while(scanf("%d",&n)!=EOF)
    {

        head=(man*)malloc(sizeof(man)*n);
        curr=head;
        curr->id=1;
        curr->next=NULL;

        //  scanf("%d",&n);
//   scanf("%d",&m);

        for(i=2; i<=n; i++)
        {
            tmp=curr;
            //curr=(man*)malloc(sizeof(man));
            curr++;
            curr->id=i;
            tmp->next=curr;


        }


        curr->next=head;
        curr=head;

        remain=n;

       // check();
        k=4;

        while(remain>1)
        {


            while(prime[k]!=0)
            {
                k++;
            }
        //    prime[k]=1;


            if(k>remain)
                j=k%remain;
            else
                j=k;

            if(j==0)
                j=remain;
              k++;

            for(i=1; i<j; i++)
            {
                tmp=curr;
                curr=curr->next;
            }



            tmp->next=curr->next;

            //      free(curr);

            curr=tmp->next;

            remain--;


        }


        printf("%d\n",curr->id);

    }

    return 0;





}

/*192.168.136.1*//*CSY103062316*/
