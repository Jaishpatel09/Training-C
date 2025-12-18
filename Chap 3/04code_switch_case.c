#include<stdio.h>
int main(){
    int a;
    printf("Enter a num : ");
    scanf("%d",&a);
    switch(a){
      case 1: printf("You entered ONE\n");
      break;
      case 2: printf("You entered TWO\n");
      break;
      case 3: printf("You entered THREE\n");
      break;
      case 4: printf("You entered FOUR\n");
      break;
      case 5: printf("You entered FIVE\n");
      break;
      case 6: printf("You entered SIX\n");
      break;
      case 7: printf("You entered SEVEN\n");
      break;
      case 8: printf("You entered EIGHT\n");
      break;
      case 9: printf("You entered NINE\n");
      break;
      case 0: printf("You entered ZERO\n");
      break;
      default:
      printf("Missmached Number ");
      
    }

   return 0;
}