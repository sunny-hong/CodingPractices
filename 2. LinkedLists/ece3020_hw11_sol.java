
public class prim_dijkstra {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int numNodes = 8;
		int source;
		int [][] weight = new int [100][100]; // adjacency matrix for input graph with weights
		int [] minWeight = new int [100];     // minWeight array for Prim's Alg.
		int [] minWeightEdge = new int [100]; // track the edges for Prim's Alg.
		int [] minDist = new int [100];       // min. distance array for Dijkstra's Alg.
		int [] minDistEdge = new int [100];   // track edges for Dijkstra's Alg.
		boolean [] inMST = new boolean[100];  // track whether each node has been added to MST
		boolean [] inSPT = new boolean[100];  // track whether each node has been added to SPT
		boolean [][] edgeMST = new boolean [100][100];  // adjacency matrix for MST
		boolean [][] edgeSPT = new boolean [100][100];  // adjacency matrix for SPT
		int minWeightAll, minWeightNode, minDistAll, minDistNode;  // miscellaneous utility variables
		
		//initialize arrays 
		for (int i=1; i <= numNodes; i++) {
			inMST[i] = false;
			inSPT[i] = false;
			for (int j=1; j <= numNodes; j++) {
				weight[i][j] = -1;
				edgeMST[i][j] = false; 
				edgeSPT[i][j] = false; 
			}
		}
		
		//define graph
		weight[1][2] = weight[2][1] = 16;
		weight[1][3] = weight[3][1] = 8;
		weight[1][5] = weight[5][1] = 15;
		weight[2][4] = weight[4][2] = 2;
		weight[3][4] = weight[4][3] = 13;
		weight[3][5] = weight[5][3] = 17;
		weight[3][6] = weight[6][3] = 4;
		weight[4][7] = weight[7][4] = 3;
		weight[5][6] = weight[6][5] = 5;
		weight[6][7] = weight[7][6] = 18;
		weight[6][8] = weight[8][6] = 12;
		weight[7][8] = weight[8][7] = 9;

		source = 6;
		inMST[source] = true; 
		inSPT[source] = true;
		System.out.println("Source node is " + source + "\n");
		
		// initialize minWeights and minDists in exactly the same way
		for (int i=1; i <= numNodes; i++) {
			if ((i != source) && (weight[source][i] != -1)) {
				minWeight[i] = minDist[i] = weight[source][i];
				minWeightEdge[i] = minDistEdge[i] = source;
			}
			else minWeight[i] = minDist[i]= 999;
		}
		
		minWeightNode = minDistNode = source;
		
		for (int i=1; i < numNodes; i++) { // iterate n-1 times (one new node added to each tree at each iteration)
			minWeightAll = minDistAll = 999;
			for (int j=1; j <= numNodes; j++) { // go through all nodes looking for next to add to MST and SPT
				// find next min. weight edge to add to MST
				if ((!inMST[j]) && (minWeight[j] < minWeightAll)) {
					minWeightAll = minWeight[j];
					minWeightNode = j;
				}
				// find next shortest path to add to SPT
				if ((!inSPT[j]) && (minDist[j] < minDistAll)) {
					minDistAll = minDist[j];
					minDistNode = j;
				}
			}
				
			// add min. weight edge to MST
			inMST[minWeightNode] = true;
			edgeMST[minWeightNode][minWeightEdge[minWeightNode]] = edgeMST[minWeightEdge[minWeightNode]][minWeightNode] = true; 
			
			// add min. dist path to SPT
			inSPT[minDistNode] = true;
			edgeSPT[minDistNode][minDistEdge[minDistNode]] = edgeSPT[minDistEdge[minDistNode]][minDistNode] = true; 
			
			// update min. weights and min. distances
			for (int j=1; j <= numNodes; j++) {
				// update min. weight
				if ((!inMST[j]) && (weight[j][minWeightNode] != -1))
					if (weight[j][minWeightNode] < minWeight[j]) {
						minWeight[j] = weight[j][minWeightNode];
						minWeightEdge[j] = minWeightNode;
					}
				// update min. distance
				if ((!inSPT[j]) && (weight[j][minDistNode] != -1))
					if (minDist[minDistNode] + weight[minDistNode][j] < minDist[j]) {
						minDist[j] = minDist[minDistNode] + weight[minDistNode][j];
						minDistEdge[j] = minDistNode;
					}
			}
		}
		
		// output MST and total weight
		int sumWeight = 0;
		System.out.println("MST edges found by Prim's Algorithm:");
		for (int i=1; i <= numNodes; i++)
			for (int j=i+1; j <= numNodes; j++)
				if (edgeMST[i][j]) {
					System.out.println("(" + i + ", " + j + ")");
					sumWeight += weight[i][j];
				}
		System.out.println();
		System.out.println("Total weight = " + sumWeight + "\n");

		// output SPT and total weight
		sumWeight = 0;
		System.out.println("SPT edges found by Dijkstra's Algorithm:");
		for (int i=1; i <= numNodes; i++)
			for (int j=i+1; j <= numNodes; j++)
				if (edgeSPT[i][j]) {
					System.out.println("(" + i + ", " + j + ")");
					sumWeight += weight[i][j];
				}
		System.out.println();
		System.out.println("Total weight = " + sumWeight);
}
}

