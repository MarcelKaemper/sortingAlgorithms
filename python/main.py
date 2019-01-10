class Sorter:
	def __init__(self, list):
		self.list = list

	def selectionSort(self):
		unsortedList = self.list[:]
		sortedList = []
		indexSmallest = 0

		while len(unsortedList)>0:
			for i in range(len(unsortedList)):
				if unsortedList[i] <= unsortedList[indexSmallest]:
					indexSmallest = i
			sortedList.append(unsortedList[indexSmallest])
			unsortedList.pop(indexSmallest)
			indexSmallest = 0
		return sortedList

	def bubbleSort(self):
		list = self.list[:]
		print("List:",list)
		moves = 0
		notDone = True
		while notDone:
			notDone = False
			for i in range(len(list)):
				if(i != len(list)-1):
					if(list[i]>list[i+1]):
						temp = list[i]
						list[i] = list[i+1]
						list[i+1] = temp
						notDone = True
		return list

sorter = Sorter([2,6,1,8,5])
print(sorter.selectionSort())
print(sorter.bubbleSort())
