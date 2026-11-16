class LinkedList:
    
    def __init__(self):
        self.arr = []
    
    def get(self, index: int) -> int:

        if index < len(self.arr):
            return self.arr[index]
        else: return -1 
        

    def insertHead(self, val: int) -> None:
        self.arr = [val] + self.arr
        return

    def insertTail(self, val: int) -> None:
        self.arr = self.arr + [val]
        return 
        

    def remove(self, index: int) -> bool:
        if index < 0 or index >= len(self.arr):
            return False
        else:
            self.arr.pop(index)
            return True
        

    def getValues(self) -> List[int]:
        return self.arr
