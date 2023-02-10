meal_cost=int(input())
tip_percent=int(input())
tax_percent=int(input())
tip=(meal_cost/100)*tip_percent
print(tip)
tax=(tax_percent/100)*tip_percent
print(tax)
total_cost=meal_cost+tip+tax
print(total_cost)
print (round(total_cost))