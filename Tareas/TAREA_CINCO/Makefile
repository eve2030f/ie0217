# Makefile para el proyecto tarea5
#Tarea 5 Evelyn Feng Wu B82870

# Compilador y opciones
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Directorios
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Archivos fuente y objeto
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Nombre del ejecutable
EXEC = tarea5.exe

# Targets
.PHONY: all clean

# all: compila y corre el juego
all: build run

# build: compila el código fuente
build: $(BIN_DIR)/$(EXEC)

# run: Ejecuta el programa
run: $(BIN_DIR)/$(EXEC)
	@echo "Ejecutando el programa..."
	@./$(BIN_DIR)/$(EXEC)

# Compila los archivos objeto
$(BIN_DIR)/$(EXEC): $(OBJS) | $(BIN_DIR)
	@echo "Compilando el ejecutable..."
	@$(CXX) $(CXXFLAGS) $^ -o $@

# Compila los archivos fuente en archivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "Compilando $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Crea el directorio de objetos si no existe
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Crea el directorio del ejecutable si no existe
$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

# Limpia los archivos creados
clean:
	@echo "Limpiando el directorio..."
	del $(OBJ_DIR) $(BIN_DIR)
