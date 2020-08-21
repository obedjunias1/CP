class SM:
    def __init__(self):
        self.c = {"SHIRT": 0, "SHOE": 0}
        self.d = {}
    def show(self):
        print(self.d)
        print(self.c)
    def get_cost(self, item):
        return self.c[item]
    def add_item(self, item, quantity):
        if quantity >= 0:
            if item not in self.d:
                self.d[item] = quantity
                print(quantity)
            else:
                print(-1)
        else:
            print(-1)
    def remove(self, item):
        if item in self.d:
            del self.d[item]
            print(1)
        else:
            print(-1)
    def get_quantity(self, item):
        if item not in self.d:
            print(0)
        else:
            print(self.d[item])
    def set_cost(self,item,n):
        self.c[item] = n
        print(self.c[item])
    def incr(self, item, q):
        if item not in self.d:
            print(-1)
        else:
            self.d[item] += q
            print(q)
    def decr(self,item,n):
        if item not in self.d:
            print(-1)
        else:
            if (self.d[item] - n) >= 0:
                self.d[item] -= n
                print(self.d[item])
            else:
                print(-1)
            if self.d[item] == 0:
                del self.d[item]
class S(SM):
    def __init__(self):
        self.cart = {}
        self.total = 0
    def show(self):
        print(self.cart)
    def add_item(self, item, quantity,tq):
        if (quantity >= 0):
            if item not in self.cart:
                self.cart[item] = quantity
                print(quantity)
            else:
                print(-1)
        else:
            print(-1)
        
    def remove(self, item):
        if item in self.cart:
            del self.cart[item]
            print(1)
        else:
            print(-1)
    def incr(self, item, q):
        if item not in self.cart:
            print(-1)
        else:
            self.cart[item] += q
            print(q)
    def decr(self, item, n):
        if item not in self.cart:
            print(-1)
        else:
            if (self.cart[item] - n) >= 0:
                self.cart[item] -= n
                print(n)
            else:
                print(-1)
            if self.cart[item] == 0:
                del self.cart[item]
    def get_order_amt(self,s1,s2):
        k = self.cart.keys()
        for key in k:
            if key == "SHIRT":
                self.total += self.cart[key] * s1
            else:
                self.total += self.cart[key] * s2    
        print("{0:.2f}".format(self.total))
        

t = int(input())

while t:
    ans = []
    sm = SM()
    s = S()
    file1 = open('inp.txt', 'r') 
    Lines = file1.readlines()
    # while (True):
    #     st = input()
    #     if (st == "END"):
    #         break
    for line in Lines:
        if line.strip() == "END":
            break
        ans.append(line.strip())
    for cmd in ans:
        inp = cmd.split(" ")
        if (len(inp) == 5):
            if inp[1] == "SM":
                if inp[2] == "SET_COST":
                    sm.set_cost(inp[3], float(inp[4]))
                elif inp[2] == "ADD":
                    sm.add_item(inp[3], int(inp[4]))
                elif inp[2] == "INCR":
                    sm.incr(inp[3], int(inp[4]))
                elif inp[2] == "DCR":
                    sm.decr(inp[3], int(inp[4]))
            else:
                if inp[2] == "INCR":
                    s.incr(inp[3], int(inp[4]))
                elif inp[2] == "DCR":
                    s.decr(inp[3], int(inp[4]))
                elif inp[2] == "ADD":
                    x = sm.get_quantity(inp[3])
                    s.add_item(inp[3], int(inp[4]),x)
        if (len(inp) == 4):
            if inp[1] == "SM":
                if inp[2] == "REMOVE":
                    sm.remove(inp[3])
                else:
                    sm.get_quantity(inp[3])
            else:
                if inp[2] == "REMOVE":
                    s.remove(inp[3])
        if (len(inp) == 3):
            s1 = sm.get_cost("SHIRT")
            s2 = sm.get_cost("SHOE")
            s.get_order_amt(s1, s2)
    t-=1

            

        

