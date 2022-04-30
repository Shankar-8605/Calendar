# Calendar
I have created one program by integrating different concepts of Calendar and concepts in cpp which take year as input and prints the calendar of entire year.

POSITION_OF_FIRST_DAY__OF_JANUARY :
	This function take input year value as integer and store it in year variable. I consider the minimum non-negative value that can be represent as year value is 5 so I store that value in first_january . 
	After every 28 years the day of first_january becomes same so I divided by 28 then whatever remainer remains store in again in year variable.
	sun   mon   tes   wed   thur   fri   satur
               0          1       2        3        4       5       6
	again after every 4 years position index of  first january increase by 5 . to start from 0 if it goes beyond 6 I done modulo by 7 then even by dividing by 4 if remainder remains we add it to ans variable (we also do plus one because after every leap year value incresed by 2 instead of 1) and return to calling function

name_of_month :
	it simply return string in related index comes as input parameter
no_of_days :
	it take month value and year value as input and return no of days are there in given month with considering the leap year condition.

NO_OF_SPACES :
	this fuction take input as month and year and make array of starting position by following below conditions 
1]if month is of 31 days then  day of date 1 of next month will increase by 3
2]if month is of 30 days then  day of date 1 of next month will increase by 2
3]if month is of 29 days then  day of date 1 of next month will increase by 1
4]if month is of 28 days then  day of date 1 of next month will increase by 0
also done modulo by 7 to start again from 0 if go beyond 6

PRINT_CALENDER :
	for loop is kept to iterate for 12 months .
inside for loop there is loop for spaces 
and loop for printing date
