class Processor:

    # Processor attributes.
    __name = ""
    __price = 0

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as data constructor. #

    # Constructor with processor's data.
    def __init__(self, name, price):
        self.__name = name
        self.__price = price
    
    # Setter and Getter. #

    # Set name attribute.
    def setName(self, name):
        self.__name = name
    
    # Set price attribute.
    def setPrice(self, price):
        self.__price = price

    # Get name attribute.
    def getName(self):
        return self.__name
    
    # Get price attribute.
    def getPrice(self):
        return self.__price