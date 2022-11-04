#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("intro une nte\n");
scanf("%d",&n);
switch(n){
case 18 :
	printf("la plus grande distinction");
	break;
	case 16:
		case 17:
		printf("grande distinction");
		break;
		case 14:
			case 15:
			printf("distinction");
			break;
			case 10:
				case 11:
					case 12:
						case 13:
				printf("satisfaction");
				break;
				case 1:
					case 2:
						case 3:
							case 4:
								case 5:
									case 6:
										case 7:
											case 8:
												case 9:
					printf("ajourne");
					break;
					default:
						printf("error");
					}
					return 0;
}

