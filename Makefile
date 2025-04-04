# Nombre del compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Archivos fuente
SRC = main.cpp \
      DtFecha.cpp DtConsulta.cpp DtMascota.cpp DtPerro.cpp DtGato.cpp \
      Mascota.cpp Perro.cpp Gato.cpp Consulta.cpp Socio.cpp

# Archivos objeto
OBJ = $(SRC:.cpp=.o)

# Nombre del ejecutable
EXEC = programa

# Regla principal
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
