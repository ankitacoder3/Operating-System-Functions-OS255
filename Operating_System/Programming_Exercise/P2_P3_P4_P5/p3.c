 /* Write a C program to simulate paging:
1-size of physical memory
2-size of logical memory
3-partition size
4- logical address
5- base address
for a given logical and base address. calculate physical address using
Physical address = base address +(Frame number * Frame size)+offset
*/

#include<stdio.h>

int main()
{
	int i,phys_size,logi_size, partition_size,logi_address,phys_address, base_address,frame_no,offset,p[100];
	char c;
	
	printf("\nEnter size of physical memory: ");
	scanf("%d", &phys_size);
   	printf("\nEnter size of logical memory: ");
	scanf("%d", &logi_size);
	printf("\nEnter partition size: ");
	scanf("%d", &partition_size);
    	printf("\nEnter a logical address: ");
	scanf("%d",&logi_address);
	printf("\nEnter base address: ");
	scanf("%d", &base_address);

	int page_no = phys_size / partition_size;
	frame_no = logi_address / partition_size;
	offset = logi_address % partition_size;	
	phys_address = base_address + (p[frame_no] * partition_size) + offset;	
	printf("\nPhysical address is: %d\n",phys_address);
    	return 0;	
}
