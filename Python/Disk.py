class Disk:

    # Disk attributes.
    __type = ""
    __capacity = 0
    __price = 0

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as data constructor. #

    # Constructor with disk's data.
    def __init__(self, type, capacity, price):
        self.__type = type
        self.__capacity = capacity
        self.__price = price
    
    # Setter and Getter. #

    # Set type attribute.
    def setType(self, type):
        self.__type = type
    
    # Set capacity attribute.
    def setCapacity(self, capacity):
        self.__capacity = capacity

    # Set price attribute.
    def setPrice(self, price):
        self.__price = price
    
    # Get type attribute.
    def getType(self):
        return self.__type
    
    # Get capacity attribute.
    def getCapacity(self):
        return self.__capacity

    # Get price attribute.
    def getPrice(self):
        return self.__price