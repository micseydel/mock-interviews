def binary_search(list, item):
    mid = len(list) / 2
    if len(list) == 0:
        return False
    if len(list) == 1:
        return list[0] == item
    if list[mid] == item:
        return True

    mid_item = list[mid]
    if item < mid_item:
        return binary_search(list[:mid], item)
    else:
        return binary_search(list[mid:], item)
