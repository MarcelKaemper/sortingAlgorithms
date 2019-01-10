class Sorter:
	def __init__(self, list, sortedList, indexSmallest):
		self.unsortedList = list
		self.sortedList = []
		self.indexSmallest = 0

	def selectionSort(self):
		print(self.unsortedList)
		while len(self.unsortedList)>0:
			for i in range(len(self.unsortedList)):
				if self.unsortedList[i] <= self.unsortedList[self.indexSmallest]:
					self.indexSmallest = i
			self.sortedList.append(self.unsortedList[self.indexSmallest])
			self.unsortedList.pop(self.indexSmallest)
			self.indexSmallest = 0
		return self.sortedList	

sorter = Sorter([2,6,1,8,5], [], 0)
print(sorter.selectionSort())
