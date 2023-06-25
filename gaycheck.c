#include <stdio.h>
/*Your mom is a nice lady*/
int length(char*);
int isSameStr(char*, char*);
int isGay(char*);
/*Nhin con cac gi ma nhin*/
int main() {
    char name[69];
    printf("--- Gay check program ---\n");
    printf("Enter your name: ");
    fgets(name, 69, stdin);
    for(int i=0; name[i]!='\0'; i++) {
        if(name[i]=='\n')
            name[i]='\0';
    }/*chit*/
    if(isGay(name))
        printf("WUT DA HELL YOURE GAY AS FUCK MAN!\n");
    else
        printf("You're not gay at all man. Straighter than the pole bat ky's mom be dancin on\n");
    return 0;
}

int length(char *a) {
    int n=0;
    if(a[0]=='\0') return 0;
    while(a[n]!='\0')
        n++;
    return n;
}

int isSameStr(char *a, char *b) {
    int i, j;
    if(length(a)!=length(b)) return 0;
    for(i=0, j=0; i<length(a); i++, j++) {
        if(a[i]!=b[j]) return 0;
    }
    return 1;
}

int isGay(char *str) {
    if(isSameStr(str, "bat ky") || isSameStr(str, "tran tuan anh") || isSameStr(str, "anh tuat") || isSameStr(str, "anh") || isSameStr(str, "tuat") || isSameStr(str, "bac ky") || isSameStr(str, "tran anh tuat") || isSameStr(str, "tran tuat anh") || isSameStr(str, "tuan anh") || isSameStr(str, "tuat anh") || isSameStr(str, "bat") || isSameStr(str, "bui hinh danh hoang"))
        return 1;
    else
        return 0;
}
