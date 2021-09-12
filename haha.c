#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main(void)
{

   char name[] = "iyamnbeen";
   struct winsize iyamnabeen; //using a structure  defined in unistd.h library.....

   ioctl(STDIN_FILENO, TIOCGWINSZ, &iyamnabeen); /*calling te ioctl function... it save the window detail
iyamnabeen structure*/
   int widthToPrintName = iyamnabeen.ws_col / 2; /*dirvinding the total width by 2  to write 
   text in center*/
   for (int i = 1; i <= widthToPrintName; ++i)
      printf(" ");     //printing the half screen with space..
   printf("%s", name); //printing the name
}
