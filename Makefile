TAPE=hello.ptap
BIN=hello
SRCS=main.c console.c libc.c math.c math/log.c
ASM=crt0.s
OBJS=$(SRCS:.c=.o) $(ASM:.s=.o)

CC=pdp11-aout-gcc
LD=pdp11-aout-ld

CFLAGS=-fno-builtin -nostdlib -nolibc
LDFLAGS=-nostdlib -nolibc -Ttext 0x200 -m10 -Os -N -e _start

$(TAPE): $(BIN)	
	aout2lda --aout $(BIN) --lda hello.ptap --data-align 2 --text 0x200 --vector0


$(BIN): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.s
	$(CC) $(CFLAGS) -c $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS) $(BIN) $(TAPE)


simh: $(TAPE)
	simh-pdp11 boot.ini
