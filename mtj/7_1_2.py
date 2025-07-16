def main():
    # 读取操作总数
    n = int(input())
    
    # 初始化栈
    stack = []
    i = 0  # 用于跟踪当前处理的操作
    
    # 使用 while 循环处理每个操作
    while i < n:
        # 读取操作
        opt = list(map(int, input().split()))
        
        # 操作一：将区间 [l, r] 的整数依次入栈
        if opt[0] == 1:
            l, r = opt[1], opt[2]
            # 从 l 到 r 的整数从后向前插入栈中
            stack.extend(range(r, l - 1, -1))
        
        # 操作二：取出栈顶的 k 个元素并计算和
        elif opt[0] == 2:
            k = opt[1]
            # 确保 k 不大于栈的长度
            if k > len(stack):
                raise ValueError("取出的元素个数超过栈中元素个数")
            # 取出栈顶的 k 个元素
            removed_elements = stack[-k:]
            # 输出这 k 个元素的和
            print(sum(removed_elements))
            # 更新栈，移除已经取出的元素
            stack = stack[:-k]
        
        i += 1  # 计数器递增

if __name__ == '__main__':
    main()
