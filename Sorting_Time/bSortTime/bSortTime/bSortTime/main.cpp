

#include "prototypes.h"


int main()
{
	
//	generateOrderedList();
	
	vector <int> v1;
	vector <int> list1[50];
	vector <int> list2[100];
	vector <int> list3[500];
	vector <int> list4[1000];
	vector <int> list5[5000];
	vector <int> list6[10000];
	vector <int> list7[50000];
	vector <int> list8[1000000];
	vector <int>::iterator Iter;

	//string superman = "superman";
	//string batman = "batman";
	//vector<string>v;
	

	/**Open csv file for writing/append**/	
	//FILE*CSV;
	//CSV = fopen("bubble.txt","a");
	
 v1.push_back( 10 );
   v1.push_back( 20 );
   v1.push_back( 30 );

   cout << "v1 =" ;
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;
   

	chrono::time_point<chrono::system_clock> start, end;//declaration of start and end.
	//printf("Variables assigned to time_point<chrono::system_clock> start, end \n start = chrono::system_clock::now();");
	//
	////Start Calculations on number sets;  N: [10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000] 


	//while(i <= calculations)//run calculations for each set of numbers 5 times per set.
	//{
	start = chrono::system_clock::now();
	//printf("start = chrono::system_clock::now(); \n Has started \n Begin bubble_sort(list, 5);");
	//bubble_sort(list, 5);
	//printf("");
	end = chrono::system_clock::now();

	//
	//printf("");
	//i++;
	//}
	//
	chrono::duration<double> elapsed_seconds = end-start;// elapsed_seconds = end-start

	//time_t end_time = std::chrono::system_clock::to_time_t(end);

	//cout << "finished computation at " << std::ctime(&end_time)
 //             << "elapsed time: " << elapsed_seconds.count() << "s\n";
	//
	//print_list(list, 5);
	
	//enum boolean status = FALSE;
	//Boolean;
	//int int_status = 0;
	
	return 0;
}