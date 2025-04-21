# 通用 Makefile：每个 .c -> 可执行文件

CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = $(wildcard *.c)
BIN = $(SRC:.c=)   # 每个 .c 去掉扩展名后就是目标名

# 默认目标：生成所有可执行文件
all: $(BIN)

# 编译每个 .c 成对应的可执行文件
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# 清理
clean:
	rm -f $(BIN)

.PHONY: all clean