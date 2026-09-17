original_price = 1000
discount_pct = 10
tax_pct = 18

discounted_price = original_price * (1 - (discount_pct / 100)) 
final_price = discounted_price * (1 + (tax_pct / 100))        
print("final_price",final_price)