OPT = -Wall
OBJS =  main.o Date.o Time.o Event.o Calender.o Control.o View.o SchoolEvent.o WorkEvent.o

cal: $(OBJS) Array.o EventServer.o
	g++ $(OPT) -o  cal $(OBJS) Array.o EventServer.o 

main.o:	main.cc   
	g++ $(OPT) -c main.cc  

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc 

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc 

Calender.o: Calender.cc Calender.h
	g++ $(OPT) -c Calender.cc 

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

Event.o: Event.cc Event.h 
	g++ $(OPT) -c Event.cc

WorkEvent.o: WorkEvent.cc WorkEvent.h
	g++ $(OPT) -c WorkEvent.cc

SchoolEvent.o: SchoolEvent.cc SchoolEvent.h
	g++ $(OPT) -c SchoolEvent.cc 

clean:
	rm -f $(OBJS) cal
