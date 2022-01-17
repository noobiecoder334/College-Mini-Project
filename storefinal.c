#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
 int pulses,choc,bis,soft,pen,pencil,note,brush,past,sham,soap;
 printf("Welcome to Camelia Department Store! Here is a list of items available for you to buy\n");
 printf("Food Items:\nPulses(25/kg)\nChocolates(45 per piece)\nBiscuits(30 per packet)\nSoft Drinks(45/litre)\n\n");
 printf("Stationery: \nPens(80 per pack of 10)\nPencils(60 per pack of 15)\nNotebook(45 per A4 size register)\n\n");
 printf("Bathroom products: \nToothpaste(300 for pack of 3)\nToothbrush(100 for pack of 3)\nShampoo(150 per bottle)\nSoap(250 for pack of 5)\n\n");
 printf("Discounts:\n5 percent discount on purchases above 500 upto 1000.\n8 percent discount on purchases above 1000 upto 3000.\n25 percent discount on purchases above 3000 upto 5000.\n20 percent discount and free cool carry on orders above 5000.\n\n");
 printf("Now enter the items and quantity of each item you want to buy\n");
 printf("Enter the kilograms of pulses you want to buy(If not put 0): ");
 scanf("%d", &pulses);
 printf("Enter the amount of chocolates you want to buy(If not put 0): ");
 scanf("%d", &choc);
 printf("Enter the amount of biscuits you want to buy(If not put 0): ");
 scanf("%d", &bis);
 printf("Enter the number of bottles of soft drink you want to buy(If not put 0): ");
 scanf("%d", &soft);
 printf("Enter the number of pencil you want to buy(If not put 0): ");
 scanf("%d", &pencil);
 printf("Enter the number of pen you want to buy(If not put 0): ");
 scanf("%d", &pen);
 printf("Enter the amount of notebooks you want to buy(If not put 0): ");
 scanf("%d", &note);
 printf("Enter the number of toothbrush packs you want to buy(If not put 0): ");
 scanf("%d", &brush);
 printf("Enter the number of toothpaste packs you want to buy(If not put 0): ");
 scanf("%d", &past);
 printf("Enter the number of shampoo bottles you want to buy(If not put 0): ");
 scanf("%d", &sham);
 printf("Enter the number of soap packs you want to buy(If not put 0): ");
 scanf("%d", &soap);
int totalbill = pulses*25 + choc*45 + bis*30 + soft*45 + pencil*60 + pen*80 + note*45 +
brush*100 + past*300 + sham*150 + soap*250;
 printf("\n Here is the list of items that you have purchased:\n");
 printf("\nPulses %d 25/kg %d\n", pulses, pulses*25);
 printf("Chocolates %d 45 %d\n", choc, choc*45);
 printf("Biscuits %d 30 %d\n", bis, bis*30);
 printf("Soft Drinks %d 45/l %d\n", soft, soft*45);
 printf("Pens %d 80 %d\n", pen, pen*80);
 printf("Pencils %d 60 %d\n", pencil, pencil*60);
 printf("Notebooks %d 45 %d\n", note, note*45);
 printf("Toothbrush %d 100 %d\n", brush, brush*100);
 printf("Toothpaste %d 300 %d\n", past, past*300);
 printf("Shampoo %d 150 %d\n", sham, sham*150);
 printf("Soap %d 250 %d\n\n", soap, soap*250);
 int gst=totalbill*18/100;
 if(500 < totalbill && totalbill < 1000){
 int discount1=totalbill*5/100;
 int tot1=totalbill-discount1;
 printf("Total Amount(5 percent discount):%d", tot1+gst);
 }else if(1000 < totalbill && totalbill < 3000){
 int discount2=totalbill*8/100;
 int tot2=totalbill-discount2;
 printf("Total Amount(8 percent discount):%d", tot2+gst);
 }else if(3000 < totalbill && totalbill < 5000){
 int discount3=totalbill*25/100;
 int tot3=totalbill-discount3;
 printf("Total Amount(25 percent discount):%d", tot3+gst);
 }else if(totalbill > 5000){
 int discount4=totalbill*20/100;
 int tot4=totalbill-discount4;
 printf("Total Amount(20 percent discount):%d +Free Cool Carry Bag", tot4+gst);
 }else{
 printf("Total Amount:%d", totalbill);
 }
 return 0;
}