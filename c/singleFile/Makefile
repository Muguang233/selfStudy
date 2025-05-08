CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = $(wildcard *.c)
BIN = $(SRC:.c=)   # 所有可执行文件列表

# 默认目标：编译所有 .c 文件
all: $(BIN)

# 编译单个文件的规则（支持 make <filename>）
# 例如：make foo 会编译 foo.c
$(BIN): %: %.c
	@# 检查是否需要 -lm
	@if grep -q -E '\<(sin|cos|tan|sqrt|log|exp|pow|fabs|ceil|floor)\s*\(' $<; then \
		echo "$< uses math functions, linking with -lm"; \
		$(CC) $(CFLAGS) $< -o $@ -lm; \
	else \
		echo "$< does not use math functions"; \
		$(CC) $(CFLAGS) $< -o $@; \
	fi

# 清理所有可执行文件
clean:
	rm -f $(BIN)

# 伪目标声明
.PHONY: all clean