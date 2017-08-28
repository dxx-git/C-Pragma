//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//#include<stdlib.h>
//
//void reverse_string(char *string)
//
//{
//	if(*string!='\0')
//	{
//
//	   reverse_string(string+1);
//	}
//
//	else
//	{
//	   return ;
//	}
//printf("%c",*string);
// }
//
//int main()
//
//{
//
// char *pa="abcdef";
//reverse_string(pa);
//system("pause");
//
//return 0;
//
//}
//


//void reverse_string(char * string)
//{
//	if(*string == '\0')
//		printf("%c",*string);
//	else
//	{
//		reverse_string(++string);  //输出下一个字符
//		printf("%c",*(--string));  //因为string已经执行完++，所以若要输出当前字符得--
//		
//	}
//}
//int main()
//{
//	char s[]="abcdefgh";
//	reverse_string(s);
////	system("pause");
////	return 0;
////}
//
//
////#include<stdio.h>
////void reverse_string(char * string)
////{
////  if(*(++string) != '\0')
////  {
////	 reverse_string(string);
////  }
////  printf("%c",*(string-1));
////}
////int main()
////{
////  char*p="abcdef";
////  reverse_string(p);
////  printf("\n");
////  system("pause");
////  return 0;
////}
//
//
//#include<stdio.h>
//void reverse_string(char * string)
//{
//   if(*string != '\0')
//   {
//	  reverse_string(string+1);
//   }
//   else
//   {
//     return ;
//   }
//   
//   printf("%c",*string);
//}
//
//int main()
//{
// char *p="abcdef";
// reverse_string(p);
// printf("\n");
// system("pause");
// return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdarg.h>
//void my_print(char *format,...)
//{
//  va_list arg;
//  const char *s;
//  char c;
//  va_start(arg,format);
//  while(*format)
//  {
//    switch(*format)
//	{
//	   case'c':
//       c = va_arg(arg, char);
//       putchar(c);
//       break;
//
//       case 's':
//       s = va_arg(arg, const char *);//取参数
//       for (; *s; s++)//通过循环，打印字符串内容
//       {
//           putchar(*s);
//        }
//       break;
//	   case' ':
//		   putchar(*format);
//		   break;
//
//	   default:
//       putchar(*format);
//       break;
//
//	}
//	format++;
//  }
//
//  va_end (arg);
//}
//int main()
//{
//my_print("s ccc","hello",'b','i','t');
//system("pause");
//return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//int my_printf(const char *fmt, ...)
//{
//const char *s;
//char c;
//va_list ap;//参数列表
//va_start(ap, fmt);//取的fmt指针给ap
//while (*fmt)
//{
///*if (*fmt != ‘s‘ || *fmt != ‘c‘)
//{
//putchar(*fmt++);
//continue;
//}*/
//switch (*fmt)
//{
//case 's':
//s = va_arg(ap, const char *);//取参数
//for (; *s; s++)//通过循环，打印字符串内容
//{
//putchar(*s);
//}
//break;
//case 'c':
//c = va_arg(ap, char);
//putchar(c);
//break;
//default:
//putchar(*fmt);
//break;
//}
//fmt++;
//}
//va_end(ap);//置0
//}
// 
// 
//int main()
//{
//char a = 'b';
//my_printf("ccc\ts!", "hello",'b', 'i', 't');
//system("pause");
//return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//int my_printf(const char *fmt, ...)
//{
//const char *s;
//char c;
//va_list ap;//参数列表
//va_start(ap, fmt);//取的fmt指针给ap
//while (*fmt)
//{
///*if (*fmt != ‘s‘ || *fmt != ‘c‘)
//{
//putchar(*fmt++);
//continue;
//




