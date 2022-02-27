


def binarysearch(a,low,high,ele):
    if low>=0 and high<=len(a)-1:
        mid = int((low+high)/2)
        if a[mid]==ele:
            return mid
        elif ele<a[mid]:
            return binarysearch(a,low,mid,ele)
        else:
            return binarysearch(a,mid+1,high,ele)
    else:
        return -1

def linearsearch(a,ele):
    for i in a:
        if i==ele:
            return a.index(i)
    return -1    

def icecream_parlour(menu,money):
    menu.sort()
    a = []
    for i in menu:
        complement = money-i
        print(menu[menu.index(i):])
        print(menu[menu.index(i)+1:])
        bal = linearsearch(menu[menu.index(i):],complement)
        if bal!=-1:
            a.append([i,menu[bal]])
    return a        

def icecream_parlour2(menu,money):
    a = {}
    for i in menu:
        for j in menu:
            temp = [i,j]
            temp.sort()
            if i+j == money and str(temp) not in a:          
                a[str(temp)] = i+j
                

    print(a)             


items = [2,4,5,6,7,8]
print(icecream_parlour2(items,10))
        
    
