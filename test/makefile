all:
	@../cxxtest-4.4/bin/cxxtestgen --error-printer -o ./ScrambleTest.cpp ./ScrambleTest.hpp
	@g++ -o ./ScrambleTest -I../cxxtest-4.4/ ./ScrambleTest.cpp ../source/*.o -I ../src/ -std=c++11

clean:
	@rm -f kataTest.cpp
	@rm -f kataTest
	@echo 'Test clean done!'	
