/* menu drived program to implement hash function using 
    1. division method
    2. multiplication method
    3. mid square method
    4. folding method */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int division(int key,int size)
{
	return key%size;
}

int multiplication(int key, int size)
{
    float a = (sqrt(5)-1)/2;
    float i = size*((key*a)-(int)(key*a));
    int h = floor(i);
    return h;
}

int mid_sq(int key, int size)
{
	int ks=0,ss=0,k2=key*key,t=k2;
	while(t>0)
    {
		t/=10;
		ks+=1;
	}
	t=size-1;
	ks/=2;
	while(t>0)
    {
		t/=10;
		ss+=1;
	}
	int f=(int)pow(10,ks+ss-1),r=(int)pow(10,ks-ss/2);
	return ((k2%f)/r)%size;
}

int folding(int key, int size)
{
	int ss=0,t=size-1,rem=0,sum=0;
	while(t>0)
    {
		t/=10;
		ss++;
	}
	t=key/ss;
	rem=key%ss;
	ss=(int)pow(10,ss);
	sum+=key%(int)pow(10,rem);
	key/=(int)pow(10,rem);
	while(t>0)
    {
		sum+=key%ss;
		key/=ss;
		t--;
	}
	return (sum%ss)%size;
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d -> %d\n",i,arr[i]);

}

void main(){
	int size, key, choice,index, temp;
	printf("Enter size of hash table : ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
		arr[i]=-1;
	printf("Enter :\n1 for division method\n2 for multiplication method\n3 for mid square method\n4 for folding method\n5 to print the hash table\n6 to exit.\n");
    do
    {
        printf("Enter choice : ");
        scanf("%d",&choice);
        if ((choice!=6) && (choice!=5))
        {
            printf("Enter key : ");
            scanf("%d",&key);
        }
        switch(choice)
        {
            case 1: 
                index = division(key,size);
                break;
            case 2:
                index = multiplication(key,size) ;             
                break;
            case 3:
                index = mid_sq(key,size);
                break;
            case 4:
                index = folding(key,size);
                break;
            case 5:
                print(arr,size);
                continue;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
                continue;
        }
        temp = index;
        do
        {
			if(arr[index]==-1)
            {
				arr[index]=key;
				printf("Key %d placed at index %d\n",key,index);
				temp=-1;
				break;
			}
			index=(index+1)%size;
		}while(temp!=index);

		if(temp==index)
			printf("Overflow\n");
    } while (choice!=6);
}