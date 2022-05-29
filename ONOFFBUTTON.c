// anokhramesh@gmail.com
  void main() {

     trisb.f0=1; // set port B 0 as an input
     trisb.f1=1; // set port B 1 as an input
     trisb.f2=0; // set port B 2 as an output
     portb.f2=0;  //set default walue of port B is LOW


     while(1)
     {
            if(portb.f0==1)  //if value of port B 0 is equal to 1 or HIGH
            {
                portb.f2=1; //set the value of Port B2 to High


            }
            if(portb.f1==1) //if value of port B 1 is equal to 1 or HIGH
            {
               portb.f2=0; //set the value of Port B2 to Low
            }



     }

}

