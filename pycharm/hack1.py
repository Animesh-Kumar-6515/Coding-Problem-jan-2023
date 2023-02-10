from datetime import datetime
arr=[]
dates=[]
for i in range(int(input())):
    s=input()
    s=s[:2]+"-"+s[2:4]+"-"+s[4:]
    # print(s)
    arr.append(s)
# arr.sort(key=lambda date: datetime.strptime(date,'%d%m%y'))
# print(arr)
# dates = [datetime.datetime.strptime(ts, "%d-%m-%Y") for ts in arr]
# dates.sort()
# sorteddates=[datetime.datetime.strftime(ts, "%d-%m-%Y") for ts in arr]
# print(sorteddates)
# print(arr)
arr.sort(key = lambda date: datetime.strptime(date, '%d-%m-%Y'))
for i in arr:
    # string st
    # st=arr[i]
    st=i.replace("-","")
    print(st)