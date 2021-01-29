Calendar: Calendar.o Calendar_Generation.o
	g++ -o Calendar Calendar.o Calendar_Generation.o
Calendar.o: Calendar.cpp calendar.h
	g++ -c Calendar.cpp
Calendar_Generation.o: Calendar_Generation.cpp calendar.h
	g++ -c Calendar_Generation.cpp 

clean:
	rm Calendar *.o