import java.util.ArrayList;
import java.util.Collections;

public class CycleDetectionDirectedGraph {

    public static void createGraph(ArrayList<ArrayList<Edge>> graph) {
        for (int i = 0; i < 4; i++) {
            graph.add(new ArrayList<>());
        }
        graph.get(0).add(new Edge(0, 2));
        graph.get(1).add(new Edge(1, 0));
        graph.get(2).add(new Edge(2, 3));
        graph.get(3).add(new Edge(3, 0));// comment it for no cycle
    }

    public static boolean isCycleDirected(ArrayList<ArrayList<Edge>> graph, ArrayList<Boolean> vis, int cur,
            ArrayList<Boolean> rec) {
        vis.set(cur, true);
        rec.set(cur, true);

        for (int i = 0; i < graph.get(cur).size(); i++) {
            Edge e = graph.get(cur).get(i);

            if (rec.get(e.dst)) {
                return true;
            } else if (!vis.get(e.dst)) {
                if (isCycleDirected(graph, vis, e.dst, rec))
                    return true;
            }

        }
        rec.set(cur, false);
        return false;

    }

    public static void main(String[] args) {
        ArrayList<ArrayList<Edge>> graph = new ArrayList<>();
        createGraph(graph);

        ArrayList<Boolean> visited = new ArrayList<>(Collections.nCopies(graph.size(), false));
        ArrayList<Boolean> recursionStack = new ArrayList<>(Collections.nCopies(graph.size(), false));

        for (int i = 0; i < graph.size(); i++) {
            if (!visited.get(i)) {
                if (isCycleDirected(graph, visited, i, recursionStack)) {
                    System.out.println("Cycle Exists.");
                    return;
                }
            }
        }
        System.out.println("Cycle not Exists.");

    }

    public static class Edge {
        int src;
        int dst;

        public Edge(int src, int dst) {
            this.src = src;
            this.dst = dst;

        }
    }

}
