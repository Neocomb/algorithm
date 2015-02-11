/*************************************************************************
	> File Name: take.c
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Feb 2015 07:47:20 AM PST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<assert.h>

#define LOG(str,...) fprintf(stdout,str,##__VA_ARGS__)
#define LOGE(str) perror(str)

int takeStone(int hn[]);

int main(int* argc , char** argv)
{
    int sum = 0,i;
    int heapNum;
    int stoneNum;
    int* heap = NULL;
    

    LOG("input heap nums:\n");
    scanf("%d",&heapNum);
    
    assert( heapNum > 0 );
    heap = (int*)calloc(1,heapNum);
    
    LOG("input stone nums:\n");
    for(i=0;i<heapNum;i++){
        scanf("%d",&heap[i]);
        sum+=heap[i];
    }

    if( sum%2==1 && heapNum%2 == 1 )
        LOG("Lost");
    else
        LOG("Win");

}

int takeStone(int hn[]){
    int sum = 0;
    int evenhpidx = -1;
    int i;

    for(i=0;i<sum;i++)
    {
        sum+=hn[i];
        if( hn[i]%2==1 )
            evenhpidx = i;
    }
    if(sum%2==1 && evenhpidx!=-1);
}
