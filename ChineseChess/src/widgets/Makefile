# Makefile

# 所有的 .ui 文件
UI_FILES := $(wildcard *.ui)
# 对应的 .h 文件
HEADER_FILES := $(patsubst %.ui, ui_%.h, $(UI_FILES))

# 目标规则：生成所有 .h 文件
all: $(HEADER_FILES)

# 生成 .h 文件的规则
ui_%.h: %.ui
	uic $< -o $@
