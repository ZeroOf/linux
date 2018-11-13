SRC_DIR:= .
OBJ_DIR:= .
BIN_DIR:= .
INC_DIR:= /home/god/linux/common
LIB_DIR:= /home/god/linux/lib

SRCS:= ${wildcard ${SRC_DIR}/*.c}
OBJS:= ${patsubst %.cc,${OBJ_DIR}/%.o, ${notdir ${SRCS}}}

TARGET=main
BIN_TARGET=${BIN_DIR}/${TARGET}

CXX = gcc
LIBS:= -lpthread -lcommon -L ${LIB_DIR}
CXXFLAGS:= -g -I${INC_DIR} 

${BIN_TARGET}:${OBJS}
	${CXX} ${OBJS} -o $@  ${LIBS}

${OBJ_DIR}/%.o:${SRC_DIR}/%.c
	${CXX}  ${CXXFLAGS} -c $< -o $@ 

clean:
	rm -rf $(OBJS)
	rm -rf $(BIN_TARGET)
