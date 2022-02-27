from Processor import Processor
from Disk import Disk
from RAM import RAM

class PC:

    # PC attributes (IKR, it has a weird syntax to declare the composite).
    __processor = Processor
    __disk = Disk
    __ram = RAM

    # Constructor.
    # Please take note that after a few try, Python seems to not accept
    # multiple constructor. So I decided to set it as data constructor. #

    # Constructor with PC's data.
    def __init__(self, processor, disk, ram) -> None:
        self.__processor = processor
        self.__disk = disk
        self.__ram = ram
    
    # Setter and Getter. #

    # Set processor attribute.
    def setProcessor(self, processor):
        self.__processor = processor
    
    # Set disk attribute.
    def setDisk(self, disk):
        self.__disk = disk
    
    # Set RAM attribute.
    def setRAM(self, ram):
        self.__ram = ram
    
    # Get processor attribute.
    def getProcessor(self):
        return self.__processor
    
    # Get disk attribute.
    def getDisk(self):
        return self.__disk
    
    # Set RAM attribute.
    def getRAM(self):
        return self.__ram