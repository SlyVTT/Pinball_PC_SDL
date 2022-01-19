DEBUG = TRUE

GXX = g++

GCCFLAGS = -Wall -W -Wunused-variable -Wunused-parameter -ffunction-sections -fdata-sections  -fno-exceptions  -lstdc++ $(shell sdl-config --cflags)
LDFLAGS = -L/usr/lib/x86_64-linux-gnu -lm -lc $(shell sdl-config --libs) -lSDL_gfx -lSDL_image

ifeq ($(DEBUG),FALSE)
	GCCFLAGS += -Os 
	EXE = Pinball
else
	GCCFLAGS += -O0 -g -D_GLIBCXX_DEBUG
	EXE = Pinball.Debug
endif

OBJS += $(patsubst %.cpp, %.o, $(shell find . -name \*.cpp))
DISTDIR = ./build

all: clean $(EXE)

$(EXE): $(EXE).elf

$(EXE).elf: $(OBJS)
	mkdir -p $(DISTDIR)
	$(GXX) $^ -o $@ $(LDFLAGS)
	
%.o: %.cpp
	$(GXX) $(GCCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DISTDIR)/$(EXE).exe
