import Pyro5.api

@Pyro5.api.expose
class GreetingMaker(object):
    def get_fortune(self, name):
        return "Hello, {0}. Here is your fortune message:\n" \
               "Tomorrow's lucky number is 12345678.".format(name)

@Pyro5.api.expose
class Calculator(object):
    def add(self, x, y):
        return x + y

    def subtract(self, x, y):
        return x - y
    
    def multiply(self, x, y):
        return x * y

    def divide(self, x, y):
        if y == 0:
            return "Division by zero is not allowed!"
        return x / y

daemon = Pyro5.server.Daemon()  # make a Pyro daemon
ns = Pyro5.api.locate_ns()  # find the name server

uri_greeting = daemon.register(GreetingMaker)  # register the greeting maker as a Pyro object
ns.register("example.greeting", uri_greeting)  # register the obj with a name in the name server

uri_calculator = daemon.register(Calculator)  # register the calculator as a Pyro object
ns.register("example.calculator", uri_calculator)  # register the obj with a name in the name server

print("Ready.")
daemon.requestLoop()  # start the event loop of the server to wait for calls
