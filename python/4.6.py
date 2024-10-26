dic={
    "李四":78,
    "如一":65,
    "赵敏":78,
    "张旭宁":99,
    "张三":45,
    "司音":90,
    "思琪":87,
    "沙思思":96,
    "柏龙":60,
    "徐来":40
}
cnt=0
sum=0
print("成绩分别为:")
for i,j in dic.items():
    print("{} {}".format(i,j))
    cnt+=1
    sum+=j

print("全班共有{}人,平均成绩为:{:.2f}分".format(cnt,sum/cnt))

