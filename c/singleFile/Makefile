# 编译器设置
CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -g
CXXFLAGS = -Wall -Wextra -g

# 获取所有源文件
C_SRC = $(wildcard *.c)
CPP_SRC = $(wildcard *.cpp)

# 生成对应的目标文件
C_BIN = $(C_SRC:.c=)
CPP_BIN = $(CPP_SRC:.cpp=)

# 默认目标：编译所有文件
all: $(C_BIN) $(CPP_BIN)

# 编译C程序的规则
$(C_BIN): %: %.c
	@# 检查是否需要 -lm
	@if grep -q -E '\<(sin|cos|tan|sqrt|log|exp|pow|fabs|ceil|floor)\s*\(' $<; then \
		echo "$< uses math functions, linking with -lm"; \
		$(CC) $(CFLAGS) $< -o $@ -lm; \
	else \
		echo "$< does not use math functions"; \
		$(CC) $(CFLAGS) $< -o $@; \
	fi

# 编译C++程序的规则
$(CPP_BIN): %: %.cpp
	@# C++默认链接 -lstdc++，同时检查是否需要 -lm
	@if grep -q -E '\<(sin|cos|tan|sqrt|log|exp|pow|fabs|ceil|floor)\s*\(' $<; then \
		echo "$< uses math functions, linking with -lm"; \
		$(CXX) $(CXXFLAGS) $< -o $@ -lstdc++ -lm; \
	else \
		echo "$< does not use math functions"; \
		$(CXX) $(CXXFLAGS) $< -o $@ -lstdc++; \
	fi

# 清理所有生成的文件
clean:
	rm -f $(C_BIN) $(CPP_BIN)

# 伪目标声明
.PHONY: all clean