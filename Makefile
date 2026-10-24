# Compiler and Flags
CXX      := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -Werror -O2 -Iinclude
LDFLAGS  := 

# Directories (Pointing to your src folder)
SRC_DIR  := src
OBJ_DIR  := build
BIN_DIR  := bin

# Target Executable
TARGET   := $(BIN_DIR)/my_program

# Find all .cc source files in src/ and map them to build/.o files
SRCS     := $(wildcard $(SRC_DIR)/*.cc)
OBJS     := $(SRCS:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)

# Default Rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# Compile .cc source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create directories if they don't exist
$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

# Clean up build artifacts
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
