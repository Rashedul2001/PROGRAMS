import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class AllPaths {
    public static void createGraph(ArrayList<ArrayList<Edge>> graph, int v) {
        for (int i = 0; i < v; i++) {
            graph.add(new ArrayList<>());
        }
    }

    public static void printAllPaths(ArrayList<ArrayList<Edge>> graph, int source, int destination, String path, ArrayList<Boolean> vis) {
        if (source == destination) {
            System.out.println(path);
            return;
        }
        for (int i = 0; i < graph.get(source).size(); i++) {
            Edge e = graph.get(source).get(i);
            if (!vis.get(e.destination)) {
                vis.set(e.destination, true);
                printAllPaths(graph, e.destination, destination, path + " " + e.destination, vis);
                vis.set(e.destination, false);
            }
        }
    }

    public static void main(String... args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of Vertices: ");
        int v = scanner.nextInt();
        ArrayList<ArrayList<Edge>> graph = new ArrayList<>(); //ArrayList<Edge>[] graph = new ArrayList[];
        createGraph(graph, v);
        System.out.print("Enter the number of Edges: ");
        int e = scanner.nextInt();
        for (int i = 0; i < e; i++) {
            System.out.print("Enter Source and Destination respectively: ");
            int source = scanner.nextInt();
            int destination = scanner.nextInt();
            graph.get(source).add(new Edge(source, destination));
            graph.get(destination).add(new Edge(destination, source));
        }
        System.out.print("Enter The Source and Destination for All Paths: ");
        int source = scanner.nextInt();
        int destination = scanner.nextInt();
        ArrayList<Boolean> vis = new ArrayList<>(Collections.nCopies(v, Boolean.FALSE));
        vis.set(source,true);
        printAllPaths(graph, source, destination, String.valueOf(source), vis);
    }

    public static class Edge {
        int source, destination;

        Edge(int source, int destination) {
            this.source = source;
            this.destination = destination;
        }
    }
}


/*
   1---3
 /     | \
0      |   5--6
 \     |  /
  2--- 4


input:
7
8
0 1
0 2
1 3
2 4
3 5
3 4
4 5
5 6
0 5

 */