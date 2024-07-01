CC=gcc
AR=ar
STRIP=strip
CP=cp

OUTPUT = ./output

LFLAGS += -I ./src/includes

EXEC = SHOP_MAIN

EXED = ./src

EXES = $(EXED)/shop.o \
		$(EXED)/sample/shop_sample_base.o \


all: $(EXEC)

EXEO = $(EXES:%.c=%.o)

%.o : %.c
	$(CC) $(CFLAGS) $(DFLAGS) -c -o $@ $< $(LFLAGS)


$(EXEC) : $(EXEO)
	$(CC) $(CFLAGS) $(DFLAGS) -o $(OUTPUT)/$(EXEC) $(EXEO) $(LFLAGS)

build: $(EXEC)

clean:
	$(RM) ./$(EXED)/*.o
	$(RM) ./$(EXED)/*/*.o
	$(RM) ./$(EXED)/*/*/*.o
	$(RM) ./$(EXED)/*/*/*/*.o
	$(RM) ./$(OUTPUT)/$(EXEC)
