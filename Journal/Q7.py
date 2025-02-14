''' 7. Create a dictionary that contains another dictionary as a value. Access the nested dictionary value. '''

student = {"s_id" : 325,"s_name" : "Akshit","age" : 19,"Stream" : "BCA"}
faculty = {"f_id" : 101,"f_name" : "Tushar ahir", "sub" : "PS" , "Address" : "Vesu"}

dic = {"s_info" : student,"f_info" : faculty}

print(f"Information of Student : {dic["s_info"]}")
print(f"Information of Faculty : {dic["f_info"]}")
