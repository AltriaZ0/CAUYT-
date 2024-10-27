import pandas as pd
import matplotlib.pyplot as plt

df=pd.read_csv(".\\py\\titanic_train.csv")

# x=df["x1"]
# y=df["y1"]
# plt.scatter(x,y)
# plt.show()

print( df.Age.groupby([df.Survived,df.Pclass]).mean())