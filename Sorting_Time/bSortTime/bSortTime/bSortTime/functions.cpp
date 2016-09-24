
#include "prototypes.h"

//FILE *openCSV(FILE stream)
//{
//
//   int numclosed;
//
//   // Open for read (will fail if file "crt_fopen.c" does not exist)
//   if( (stream  = fopen( "crt_fopen.c", "r" )) == NULL ) // C4996
//   // Note: fopen is deprecated; consider using fopen_s instead
//      printf( "The file 'crt_fopen.c' was not opened\n" );
//   else
//      printf( "The file 'crt_fopen.c' was opened\n" );
//
//   // Open for write 
//   if( (stream2 = fopen( "data2", "w+" )) == NULL ) // C4996
//      printf( "The file 'data2' was not opened\n" );
//   else
//      printf( "The file 'data2' was opened\n" );
//
//   // Close stream if it is not NULL 
//   if( stream)
//   {
//      if ( fclose( stream ) )
//      {
//         printf( "The file 'crt_fopen.c' was not closed\n" );
//      }
//   }
//
//   // All other files are closed: 
//   numclosed = _fcloseall( );
//   printf( "Number of files closed by _fcloseall: %u\n", numclosed );
//FILE *bubbleLogs;
//fopen(bubbleLogs);
//
//}
//
//int randomNum()
//{
// vector <int> srand(time(NULL));
// int r = rand();  
//return r;
//}
//
//void bubble_sort(int list[], int size);
//
//void bubble_sort(int list[], int size)
//{
//	int index = 0, passes = 0, temp = 0;
//
//	for (passes = 1; passes < size; passes++)
//	{
//		for (index = 0; index < size - passes; index++)
//		{
//			if (list[index] > list[index + 1])//swap
//			{
//				temp = list[index];
//				list[index] = list[index + 1];
//				list[index + 1] = temp;
//			}
//		}
//	}
//}
//
//void print_list(int list[], int size)
//{
//	int index = 0;
//	for (index = 0; index < size; index++)
//	{
//		printf("\n%d\n", list[index]);
//	}
//}
//
////Ordered list for n elements
//void generateOrderedList()
//{
//	char arr[5];
//	//int arr1[10], arr2[20], arr3[30], arr4[50], arr[50];
//	
//
//	int i=0;
//
//	for(i=0;i<=5;i++)
//	{
//		arr[i] = i;
//		printf("%d",arr[i]);
//	}
//
//
//
//
//
//
//
//}
//
//















