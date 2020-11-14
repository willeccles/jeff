.PHONY: clean

CFLAGS += -O3 -std=c11

jeff: jeff.c
	$(CC) $(CFLAGS) -o jeff jeff.c

clean:
	rm jeff
