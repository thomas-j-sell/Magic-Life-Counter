#include <stdio.h>
#include <stdlib.h>

int main()
{
	int life_total = 20;
	char input[32] = "null";
	char death_message[32] = "O dear, you are dead";

	printf("Starting life total: %i\n",20);

	while(1)
	{
		if(fgets(input, 32, stdin) == NULL) break;

		if(input[0] == 'a')
			life_total += atoi(&input[2]);
		if(input[0] == 's')
			life_total -= atoi(&input[2]);

		if(life_total <= 0)
		{
			printf("%s\n",death_message);
			break;
		}
		else printf("%i\n",life_total);
	}
	return 0;	
}
