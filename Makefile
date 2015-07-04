TARGET=dyn_tbl_example
SRC=$(wildcard *.c)
OBJ=$(SRC:%.c=%.o)
CC=gcc
CFLAGS+=-c -g
LDSCRIPT=dyn_tbl.lds

$(TARGET): all

all: $(OBJ)
	$(CC) -o $(TARGET) -T $(LDSCRIPT) $^

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.o

fullclean: clean
	rm -rf $(TARGET)
