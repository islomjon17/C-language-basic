"""
/* 
N ta elementdan iborat A royxati berilgan:

T biz royxat ichidan qidirayotgan qiymat
Bizga T ning indeksi kerak bo'ladi

pastki chegarasi L=0, tepa chegarani H=N-1 deb belgilayzmi
2. Agar L>H bo'lsa qidirmaymiz.
3.Orta qiymatning indeksini aniqlash uchun m=(L+H)/2
4. Agar Am-T bo'lsa m ni qaytaramiz. Dastru to'xtaydi
5. Agar Am<t bo'lsa, L=m+1 qilamiz va 2-qadamga qaytaramiz
6. Agar Am >T bo'lsa, H=m-1 qilamiz va 2-qadamaga qaytaramiz
*/




"""

# Python 3 program for recursive binary search.
# Modifications needed for the older Python 2 are found in comments.

# Returns index of x in arr if present, else -1
def binary_search(arr, low, high, x):
	# Check base case
	if high >= low:
		mid = (high + low) // 2
		# If element is present at the middle itself
		if arr[mid] == x:
			return mid
		# If element is smaller than mid, then it can only
		# be present in left subarray
		elif arr[mid] > x:
			return binary_search(arr, low, mid - 1, x)
		# Else the element can only be present in right subarray
		else:
			return binary_search(arr, mid + 1, high, x)
	else:
		# Element is not present in the array
		return -1
# Test array
arr = [ 2, 3, 4, 10, 40 ]
x = 10
# Function call
result = binary_search(arr, 0, len(arr)-1, x)
if result != -1:
	print("Element is present at index", str(result))
else:
	print("Element is not present in array")
