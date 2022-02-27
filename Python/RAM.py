class RAM:

    # RAM attributes.
    __capacity = 0
    __price = 0

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as data constructor. #

    # Constructor with RAM's data.
    def __init__(self, capacity, price):
        self.__capacity = capacity
        self.__price = price
    
    # Setter and Getter. #

    # Set capacity attribute.
    def setCapacity(self, capacity):
        self.__capacity = capacity
    
    # Set price attribute.
    def setPrice(self, price):
        self.__price = price
    
    # Get capacity attribute.
    def getCapacity(self):
        return self.__capacity
    
    # Get price attribute.
    def getPrice(self):
        return self.__price
