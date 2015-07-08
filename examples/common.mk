#########################################
# This is common Makefile, it should by # 
# include by all other Makefiles.       #
########################################


SRC=$(wildcard *.c)
OBJ=$(SRC:%.c=%.o)
CC=gcc
CFLAGS+=-c $(addprefix -I, $(INC))
ifeq ($(DEBUG), y)
CFLAGS+=-g
endif
LDSCRIPT=dyn_tbl.lds
LDFLAGS+=$(addprefix -L, $(LIBS))

$(TARGET): all

all: $(OBJ)
	$(CC) $(LDFLAGS) -o $(TARGET) -T $(LDSCRIPT) $^

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.o

fullclean: clean
	rm -rf $(TARGET)
