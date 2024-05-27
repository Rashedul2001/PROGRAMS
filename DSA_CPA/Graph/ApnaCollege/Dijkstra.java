// incomplete

import java.util.ArrayList;

public class Dijkstra {
    static class Edge {
        int src;
        int dst;
        int wt;

        public Edge(int src, int dst, int wt) {
            this.src = src;
            this.dst = dst;
            this.wt = wt;
        }

    }

    public static void createGraph(ArrayList<ArrayList<Edge>> graph) {
        for (int i = 0; i < graph.size(); i++) {
            graph.set(i, new ArrayList<>());
        }
        graph.get(0).add(new Edge(0, 1, 2));
        graph.get(0).add(new Edge(0, 2, 4));
        graph.get(0).add(new Edge(1, 3, 7));
        graph.get(0).add(new Edge(1, 2, 1));
        graph.get(0).add(new Edge(2, 4, 3));
        graph.get(0).add(new Edge(3, 5, 1));
        graph.get(0).add(new Edge(4, 3, 2));
        graph.get(0).add(new Edge(4, 5, 5));

    }

    public static void main(String[] args) {

    }

}