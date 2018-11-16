#include<stdio.h>
int find(int a[],int index,int k)
{
    if(a[index]<a[k])
        return index;
    return k;
}
int main()
{
    int a[100],b[100],min,index,k;
    int i,j,n,cnt=0,stmp=0,num=0;
    printf("Enter no of digits:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d. ",++num);
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
        b[i]=0;
      for(i=0;i<n;i++)
   {
       stmp=0;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j] && a[i]!=-1){
           // printf("\nEquals");
            b[i]=b[i]+1;
            a[j]=-1;
            stmp=1;
           }
       }
        if(stmp==0 && a[i]!=-1){
        //  b[i]=b[i]+1;
           stmp=1;
           }
       if(stmp==1)
        b[i]=b[i]+1;
    }
//    for(i=0;i<n;i++)
//       printf("%d ",a[i]);
    printf("Sorted Order:\n");
//  for(j=0;j<n;j++)
//     printf("%d ",b[j]);
// printf("\n-->\n");
 //--p

//    stamp=0;
cnt=0;
  for(i=0;i<n;i++)
  {
    min=100000000000;
    cnt=0;
      //if(b[i]!=0){
        for(k=0;k<n;k++)
        {

            if(b[k]<min && b[k]!=0)
            {
                min=b[k];
                index=k;
                cnt++;

            }
            else if(b[k]==min)
            {
                index=find(a,index,k);
                min=b[k];
                cnt++;
            }
        }
        if(cnt!=0)
        {
            for(j=0;j<min;j++)
            {
                printf("%d ",a[index]);
            }
        }
        b[index]=0;
        a[index]=-1;

      }


    return 0;
}
