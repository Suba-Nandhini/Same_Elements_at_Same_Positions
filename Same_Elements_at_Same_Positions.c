DAILY CHALLENGE
ProgramID- 8002
SkillRack
Same Elements at Same Positions
The program must accept two integer matrices are of the same size RxC as the input. If both the matrices have the same elements in the same positions then retain the elements in their same positions of the first matrix. Else the program must replace the elements by * in the first matrix. Finally, the program must print the modified first matrix as the output.
Boundary Condition(s):
2 <= R, C <= 100
Input Format:
The first line contains two integers R and C separated by a space.
The next 2*R lines contain (the first and the second matrix) C integers on each line separated by space(s).
Output Format:
The first R lines contain C integers or *.
Example Input/Output 1:
Input:
44
2348
9732
5863
1835
2941
1232
5842
1855
Output:
2*4*
**32
58**
18*5
Explanation:
First Matrix
2348
2941
9732
1232
Second Matrix
5863
5842
1835
1855
Elements in both the matrices at the same positions having same value are replaced by * Hence the output is

2*4*
**32
58**
18*5
Source Code:
#include<stdio.h>
#include<stdlib.h>
int main(){
int r,c;
scanf("%d %d\n",&r,&c);
int arr[r][c],adj[r][c];
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d", &arr[i][j]);
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d",&adj[i][j]);
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
if(arr[i][j]==adj[i][j]){ printf("%d ", arr[i][j]);


}

else{
printf("*");


}
 }
printf("\n");

}
}
