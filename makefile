test: main.o Input.o Output.o Judgement.o Struct.o
	g++ -o test main.o Input.o Output.o Judgement.o Struct.o -g
main.o: main.cpp Judgement.h
	g++ -c -o main.o main.cpp -g
Input.o: Input.h Input.cpp Struct.h
	g++ -c -o Input.o Input.cpp -g
Output.o: Output.h Output.cpp Struct.h
	g++ -c -o Output.o Output.cpp -g
Struct.o: Struct.h Struct.cpp
	g++ -c -o Struct.o Struct.cpp -g
Judgement.o: Judgement.h Judgement.cpp 
	g++ -c -o Judgement.o Judgement.cpp -g
clean:
	rm -f test *.o *.csv
