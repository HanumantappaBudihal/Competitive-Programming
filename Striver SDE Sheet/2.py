import random
import matplotlib.pyplot as plt

graph_data = []

def main():
    for i in range(500):
        nodes = random.randrange(4,101,2)
        print(nodes)
        b_limit=(nodes/2)-1
        b = random.randint(1,b_limit)
        delove_solve(nodes,int(b))  

    g_x = [item[0] 
            for item in graph_data if item[2]=="G"]
    b_x = [item[0]  
            for item in graph_data if item[2]=="B"]

    g_y = [item[1] 
            for item in graph_data if item[2]=="G"]
    b_y = [item[1] 
            for item in graph_data if item[2]=="B"]

    plt.scatter(g_x, g_y, color='blue', label='good')
    plt.scatter(b_x, b_y, color='red', label='bad')
    plt.xlabel('total nodes (n)')
    plt.ylabel('byzantine nodes count (b)')
    plt.legend()
    plt.show()

def delove_solve(n,b):
    ns = [i for i in range(n)]
    byzantine_nodes = random.sample(range(0, n), b)
    i ,j = 1,0 
    ns[0]=n
    while(i<n):    
        if(j not in byzantine_nodes):
            j = random.randint(2,n-1)
            if ns[j]==n:
                j = i
                i += 1
                while(i<n and ns[i]==n):
                    i += 1
        else:
            j = i
            i += 1
            while(i<n and ns[i]==n):
                i += 1
        ns[j]=n
    if j <n-b:
        graph_data.append([n,b,"G"])
    else:
        graph_data.append([n,b,"B"])

if __name__ == "__main__":
    main()