CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = linear

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c =.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
