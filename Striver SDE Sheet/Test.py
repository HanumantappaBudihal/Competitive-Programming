from random import randint
from tkinter.tix import Tree
import matplotlib.pyplot as plt

def plot_graph(graph_data):
   
    g_x = [item[0] 
            for item in graph_data if item[2]=="G"]
    b_x = [item[0]  
            for item in graph_data if item[2]=="B"]

    g_y = [item[1] 
            for item in graph_data if item[2]=="G"]
    b_y = [item[1] 
            for item in graph_data if item[2]=="B"]

    plt.scatter(g_x, g_y, color='blue', label='good Won')
    plt.scatter(b_x, b_y, color='red', label='bad Won')
    plt.xlabel('total nodes (n)')
    plt.ylabel('byzantine nodes count (b)')
    plt.legend()
    plt.show()

def fun(n_nodes,b_nodes):
    flag = True
    nodes = [0]*(n_nodes-b_nodes)+[1]*b_nodes
    c_node = [n_nodes,b_nodes]   
    while(b_nodes!=0 and b_nodes!=n_nodes):       
        if(flag):          
            for i in range(b_nodes):
                nodes[randint(0,n_nodes-1)] = 1     
        else:          
            for i in range(n_nodes-b_nodes):
                nodes[randint(0,n_nodes-1)] = 0
        b_nodes = sum(nodes)
        flag = not flag

    if(b_nodes==0):
        c_node.append("G")
    else:
        c_node.append("B")

    return c_node

def main():
    graph_data=[]
    for i in range(100):
        n = randint(1,100)
        b = randint(1,n)        
        graph_data.append(fun(n,b))

    plot_graph(graph_data)

if __name__=="__main__":
    main()
