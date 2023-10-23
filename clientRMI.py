import Pyro5.api

name = input("What is your name? ").strip()
greeting_maker = Pyro5.api.Proxy("PYRONAME:example.greeting")  # use name server object lookup uri shortcut
print(greeting_maker.get_fortune(name))

calculator = Pyro5.api.Proxy("PYRONAME:example.calculator")
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
print(f"{num1} + {num2} = {calculator.add(num1, num2)}")
print(f"{num1} - {num2} = {calculator.subtract(num1, num2)}")
print(f"{num1} * {num2} = {calculator.multiply(num1, num2)}")
print(f"{num1} / {num2} = {calculator.divide(num1, num2)}")
