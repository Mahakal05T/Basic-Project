def test(nums):
    return nums.count(19) == 2 and nums.count(5) >= 3
nums = [19,19,15,5,3,5,5,2]
print("Original list:")
print(nums)
print("Check two occurrences of nineteen and at least three occurrences of five in the said list:")
print(test(nums))
nums = [19,15,15,5,3,3,5,2]
print("\nOriginal list:")
print(nums)
print("Check two occurrences of nineteen and at least three occurrences of five in the said list:")
print(test(nums))
nums = [19,19,5,5,5,5,5]
print("\nOriginal list:")
print(nums)
print("Check two occurrences of nineteen and at least three occurrences of five in the said list:")
print(test(nums))
