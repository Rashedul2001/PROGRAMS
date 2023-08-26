// /* Example */

// #include <stdio.h>
// void (*f[10])(int, int);
// void func1(int a, int b)
// {
// 	printf("func1 = %d, %d\n", a, b);
// }
// void func2(int p, int q)
// {
// 	printf("func2 = %d, %d\n", p, q);
// }
// void func3(int x, int y)
// {
// 	printf("func3 = %d, %d\n", x, y);
// }
// int main()
// {
// 	f[0] = func1;
// 	f[1] = func2;
// 	f[2] = func3;
// 	(*f[0])(1, 2);
// 	(*f[1])(3, 4);
// 	(*f[2])(5, 6);
//     printf("\n new one with not *::::\n");
//     (f[0])(1, 2);
// 	(f[1])(3, 4);
// 	(f[2])(5, 6);
// 	return 0;
// }



// // /* Example */

// // #include <stdio.h>
// // int (*fp)();
// // int func(void) { printf("hello\n"); }

// // int main()
// // {
// // 	fp = func;
// // 	(*fp)();
// // 	// fp(); // This will also call func
// // 	return 0;
// // }

// #include <stdio.h>

// void on_sig10_exit(int u) { printf("sig10 exit\n"); }
// void on_sig20_exit(int u) { printf("sig20 exit\n"); }
// void default_exit(int u) { printf("default exit\n"); }
// void user_default_exit(int u)
// {
// 	printf("user default exit\n");
// }

// void (*exit_by)(int);

// void (*bsd_signal(int sig, void (*func)(int)))(int)
// {
// 	switch (sig) {
// 	case 10:
// 		return on_sig10_exit;
// 	case 20:
// 		return on_sig20_exit;
// 	default:
// 		if (func == NULL)
// 			return default_exit;
// 		else
// 			return user_default_exit;
// 	}
// }

// int main()
// {
// 	(bsd_signal(10, NULL))(0);
// 	(bsd_signal(20, NULL))(0);
// 	(bsd_signal(30, NULL))(0);
// 	(bsd_signal(30, user_default_exit))(0);
// 	return 0;
// }
