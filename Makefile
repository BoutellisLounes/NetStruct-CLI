# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Files
SRCS = src/main.c src/cli_user.c src/ip_calc.c
TARGET = netstruct

# Default build command
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Clean command to remove the compiled executable
clean:
	rm -f $(TARGET) $(TARGET).exe
