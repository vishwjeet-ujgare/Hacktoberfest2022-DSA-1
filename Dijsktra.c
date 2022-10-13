#include<stdio.h>

#define INF 999
#define MAX 10


void dijsktra(int Graph[MAX][MAX],int n,int start){
    int cost[MAX][MAX],distance[MAX],pred[MAX],visited[MAX],i,j,count,mindist,nextnode;

    // creating cost matrix

    for ( i = 0; i < n; i++)
    {
        for(j = 0; j<n ; j++){
            if (Graph[i][j]==0)
            {
                cost[i][j]=INF;
            }
            else{
                cost[i][j]= Graph[i][j];
            }
            
        }
    }

    for ( i = 0; i < n; i++)
    {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n-1)
    {
        mindist = INF;

        for ( i = 0; i < n; i++)
        {
            if (distance[i] < mindist && !visited[i])
            {
                mindist = distance[i];
                nextnode = i;
            }
        }
        visited[nextnode] = 1;
        for ( i = 0; i < n; i++)
        {
            if(!visited[i]){
                if (mindist + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindist + cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }
      
        count++;   
        
    }

    // for printing the array

    for ( i = 0; i < n; i++)
    {
        if(i != start){
            printf("\nDistance from source to %d is : %d",i,distance[i]);
        }
    }
     
}


int main(){
    int Graph[MAX][MAX] = {
        {0,7,9,0,0,0},
        {7,0,10,15,0,0},
        {9,10,0,11,0,2},
        {0,15,11,0,6,0},
        {0,0,0,6,0,9},
        {14,0,2,0,9,0}
    };

    int n = 6;
    int start = 0;

    dijsktra(Graph,n,start);
    return 0;
}
