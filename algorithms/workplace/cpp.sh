#!/bin/bash

# 检查是否提供了文件名参数
if [ -z "$1" ]; then
  echo "Usage: ./create_cpp.sh <filename>"
  exit 1
fi

# 获取文件名（不带 .cpp 后缀）
filename=$1

# 创建文件并写入模板内容
cat << EOF > "$filename.cpp"
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    return 0;
}
EOF

echo "Created file: $filename.cpp"