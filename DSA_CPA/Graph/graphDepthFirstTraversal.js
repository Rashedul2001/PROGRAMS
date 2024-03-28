const depthFirstTraversalPrint = (graph, source) => {
	const st = [source];

	while (st.length > 0) {
		const current = st.pop();
		console.log(current);
		for (let neighbor of graph[current]) st.push(neighbor);
	}
};

const graph = {
	a: ["c", "b"],
	b: ["d"],
	c: ["e"],
	d: ["f"],
	e: [],
	f: [],
};

depthFirstTraversalPrint(graph, "a"); // a b d f c e
