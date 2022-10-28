class  CallingCons
{
    public static void main(String[] args)
    {
        C c= new C();
    }
}

class A{
    A()
    {
        System.out.println("InsideA\n");
    }
}
class B extends A{
    B()
    {
        System.out.println("InsideB\n");
    }
}
class C extends A{
    C()
    {
        System.out.println("InsideC\n");
    }
}
