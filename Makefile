SHELL = /bin/sh
CC = g++
INCLUDES = 
LIBS = -lmysqlpp `net-snmp-config --libs` -lboost_thread
CCFLAGS = -g $(INCLUDES) -DMYSQLPP_MYSQL_HEADERS_BURIED
LDFLAGS = -g
OBJS = \
    mysql_output.o \
    main.o \
    sensor.o \
    snmp_sensor.o

srcdir = src

all: varys 

varys: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

%.o: $(srcdir)/%.cpp
	$(CC) $(CCFLAGS) $(LDFLAGS) -c $< -o $@

clean:
	rm *.o
