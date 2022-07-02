/* Perfect FPS Sensitivity Calculator */
/* Copyright (c) 2022 Luna Roberge */

#include <stdio.h>

int main()
{
   double val_sens, ow_sens, apex_sens;
   double val_to_ow_multiplier = 7 / 0.66;
   double ow_to_apex_multiplier = 0.3;
   int i;

   for (i = 0; i <= 5000; i++)
   {
      val_sens = (double) i / (double) 1000;
      ow_sens = val_sens * val_to_ow_multiplier;
      apex_sens = ow_sens * ow_to_apex_multiplier;

      if
      (
       ((val_sens * 1000) - (int) (val_sens * 1000) == 0.0) &&
       ((ow_sens * 1000) - (int) (ow_sens * 1000) == 0.0) &&
       ((apex_sens * 1000) - (int) (apex_sens * 1000) == 0.0)
      )
      {
         printf("Valorant: %5.3f | Overwatch: %5.3f | Apex: %5.3f \n", 
               val_sens, ow_sens, apex_sens);
      }
   }

   return 0;
}
