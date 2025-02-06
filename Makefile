CXX = g++
CXXFLAGS = -std=c++17 -I./include
LDFLAGS = -lpython3.8  # Link with Python 3.x (adjust version accordingly)

SRC = src/main.cpp src/tutor.cpp src/ai_connector.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = tutor_app

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC) $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
