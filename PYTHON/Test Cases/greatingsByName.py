li = ["Rashedule", "sohel", "Hasan", "Sakib", "Jahid"]

for names in li:
    # names = names.upper() ## All upper case
    names = names.capitalize()
    if names.startswith("S"):
        print(f"Assalamualaikum {names}")
