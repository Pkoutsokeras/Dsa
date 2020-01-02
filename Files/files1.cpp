/* Writes 100 random integers in a file and read this file to display */

#include <cstdio>
#include <cstdlib>
#include <ctime>
int main(){
    FILE *fp=fopen("data_int_100.txt","w"); //"w" stands for writting to file
    srand(time(NULL));
    for(int i=0; i<100; i++){
        fprintf(fp,"%d",rand()%1000+1);
        fclose(fp);
        fp= fopen("data_int_100.txt","r"); //"r" stands for reading the file
        if(fp==NULL){
            printf("Error opening the file"); // Validiating the file
        }
        exit(-1);
    }
    int x;
    while(!feof(fp)){
        fscanf(fp,"%d",&x);
        printf("%d",x);
    }
    fclose(fp);
    return 0;
}