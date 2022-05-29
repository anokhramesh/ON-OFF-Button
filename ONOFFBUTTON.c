
  void main() {

     trisb.f0=1;
     trisb.f1=1;
     trisb.f2=0;
     portb.f2=0;


     while(1)
     {
            if(portb.f0==1)
            {
                portb.f2=1;


            }
            if(portb.f1==1)
            {
               portb.f2=0;
            }



     }

}

