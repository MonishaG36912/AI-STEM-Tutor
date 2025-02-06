CXX = g++
CXXFLAGS = -std=c++17 -I./include
PYTHON_LDFLAGS = $(shell python3-config --ldflags)  # Dynamically find Python link flags

SRC = src/main.cpp src/tutor.cpp src/ai_connector.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = tutor_app

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC) $(PYTHON_LDFLAGS)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
