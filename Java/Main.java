package Arrays;

public class Main {
    public static void main(String[] args) {
//        int[] myVar;
//        myVar=new int[10];

        int[] myintArray=new int[25];
        //int[] myintArray={1,2,3,4,5,6,7,8,9,10};
//        myintArray[5]=50;
//        myintArray[0]=45;
       // myintArray={1,2,3,4,5,6,7,8,9,10}

        for(int i=0;i<myintArray.length;i++){
            myintArray[i]=i*10;
        }


//        double[] mydoubleArray=new double[10];
//        System.out.println(myintArray[5]);
//        System.out.println(myintArray[1]);
//        System.out.println(myintArray[0]);

printArray(myintArray);

    }

    public static void printArray(int [] array){
        for(int i=0;i<array.length;i++){
            System.out.println("element "+i+" value is"+array[i]);
        }
    }
}
