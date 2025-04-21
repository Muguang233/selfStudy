# === 变量定义 ===
CC = gcc
CFLAGS = -Wall -Wextra -g      # 编译参数：警告 + 调试信息
LDFLAGS =                      # 链接参数
TARGET = main                  # 最终生成的可执行文件名
SRC = $(wildcard *.c)          # 所有 .c 文件
OBJ = $(SRC:.c=.o)             # 对应的 .o 文件

# === 默认目标 ===
all: $(TARGET)

# === 链接目标 ===
$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

# === 编译规则 ===
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# === 清理命令 ===
clean:
	rm -f *.o $(TARGET)

.PHONY: all clean