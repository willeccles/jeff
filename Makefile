.PHONY: clean

CXXFLAGS += -O3 -std=c++17

jeff: jeff.cpp
	$(CXX) $(CFLAGS) -o jeff jeff.cpp

clean:
	rm jeff
