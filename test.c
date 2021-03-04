int olpay()
{
		int a;
		printf("扫描二维码进行支付\n");
		printf("####### #######  #######\n");
		printf("#     # ####     #     #\n");
		printf("# ### # ## ##    # ### #\n");
		printf("# ### #   #  # # # ### #\n");
		printf("#     # #  #     #     #\n");
		printf("####### #######  #######\n");
		printf("   #   #  ## #     #    \n");
		printf("# ##  ##  ##  ##  #  ###\n");
		printf("  #   ###  # ####  #   #\n");
		printf("####### ######   ###  # \n");
		printf("#     # ### ##   #     #\n");
		printf("# ### # ## ## #    ###\n");
		printf("# ### # ## ## #    ###\n");
		printf("#     # #  ##    #     #\n");
		printf("####### #####     ###  # \n");
		printf("请确认是否完成支付：确认请按1，返回上一层请按2\n");
		scanf("%d",&a);
			if (a==1)
			{
			system("cls");
			printf("支付成功！") ;
			} 
		return a;
	}
void main()
{
	olpay();
}
