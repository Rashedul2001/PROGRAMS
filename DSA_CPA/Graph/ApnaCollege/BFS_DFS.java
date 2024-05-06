import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.stream.IntStream;

public class BFS {
    public static void createGraph(ArrayList<Edge>[] graph) {
        IntStream.range(0, graph.length).forEach(i -> graph[i] = new ArrayList<>());
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[1].add(new Edge(1, 0));
        graph[1].add(new Edge(1, 3));

        graph[2].add(new Edge(2, 0));
        graph[2].add(new Edge(2, 4));


        graph[3].add(new Edge(3, 1));
        graph[3].add(new Edge(3, 4));
        graph[3].add(new Edge(3, 5));

        graph[4].add(new Edge(4, 2));
        graph[4].add(new Edge(4, 3));
        graph[4].add(new Edge(4, 5));

        graph[5].add(new Edge(5, 3));
        graph[5].add(new Edge(5, 4));
        graph[5].add(new Edge(5, 6));

        graph[6].add(new Edge(5, 5));

    }

    public static void BFS(ArrayList<Edge>[] graph, boolean[] vis, int start) {
        Queue<Integer> q = new LinkedList<>();
        q.add(start);

        while (!q.isEmpty()) {
            int curr = q.remove();
            if (!vis[curr]) {
                System.out.print(curr + " ");
                vis[curr] = true;

                for (int i = 0; i < graph[curr].size(); i++) {
                    q.add(graph[curr].get(i).dst);
                }
            }
        }

    }

    public static void main(String... args) {
        int v = 7;
    /*
        1--3
       /   | \
      0    |   5 -- 6
      \    |  /
       2---4
     */
        ArrayList<Edge>[] graph = new ArrayList[v];
        createGraph(graph);
        boolean[] vis = new boolean[v];
        // this will also work for graph which has separated vertices
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                BFS(graph, vis, i);
            }
        }
        System.out.println();
    }

    public static class Edge {
        int src, dst;

        Edge(int src, int dst) {
            this.src = src;
            this.dst = dst;
        }
    }
}
