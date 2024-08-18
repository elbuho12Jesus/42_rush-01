#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


//col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right

int ASCII_to_number(int number_ascii)
{
  return (number_ascii-48);
}

int[4][4] square()
{
  int square[4][4]={{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
  return square;
}

void validate_squere()
{

}

int main(int argc,char *argv[])
{
  if(argc!=2)
  {
    printf("Ha olvidado su nombre.\n");
    return 0;
  }
  int col1up=ASCII_to_number(argv[1][0]);
  int col2up=ASCII_to_number(argv[1][2]);
  int col3up=ASCII_to_number(argv[1][4]);
  int col4up=ASCII_to_number(argv[1][6]);
  int col1down=ASCII_to_number(argv[1][8]);
  int col2down=ASCII_to_number(argv[1][10]);
  int col3down=ASCII_to_number(argv[1][12]);
  int col4down=ASCII_to_number(argv[1][14]);
  int row1left=ASCII_to_number(argv[1][16]);
  int row2left=ASCII_to_number(argv[1][18]);
  int row3left=ASCII_to_number(argv[1][20]);
  int row4left=ASCII_to_number(argv[1][22]);
  int row1right=ASCII_to_number(argv[1][24]);
  int row2right=ASCII_to_number(argv[1][26]);
  int row3right=ASCII_to_number(argv[1][28]);
  int row4right=ASCII_to_number(argv[1][30]);
  int square[4][4]=square();


   
  return (0); 
}
