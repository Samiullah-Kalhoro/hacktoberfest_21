public class gasStation {
    public static void main(String[] args) {
        int[] gas=new int[]{1,2,3,4,5};
        int[] cost=new int[]{3,4,5,1,2};
        int totalGas=0;
        int totalCost=0;
        int gasTillNow=0;
        int st=0;
        for(int i=0;i<gas.length;i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
            
            gasTillNow+=gas[i]-cost[i];
            if(gasTillNow<0){
                st=i+1;
                gasTillNow=0;
            }
        }
        if(totalGas<totalCost){
            System.out.println(-1);
            return ;
        }
        System.out.println(st);

    }
}
