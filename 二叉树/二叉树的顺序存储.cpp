//#include<stdio.h>
//#define maxSize 127  // 默认存储大小，按满二叉树定义
//typedef char DataType; // 假设元素数据类型为char
//typedef struct {
//	DataType data[maxSize];   // 存储数组
//	int n;  //当前结点的个数
//}SqBTree;
//void InitSeqTree(SqBTree* tree)
//{	//将字符数组中的所有元素初始化赋值
//	for (int i = 0; i < maxSize; i++)
//	{
//		tree->data[i] = '\0';
//	}
//}
//void CreatSeqTree(SqBTree* tree)
//{
//	int node = 0;
//	tree->n = 0;
//	printf("按照层次从左往右输入树中结点的值，0 表示空结点，^表示输入结束:\n");
//	scanf_s("%c", &node);
//	tree->data[tree->n] = node;
//	tree->n++;
//	while (node!='^')
//	{
//		scanf_s("%c", &node);
//		tree->data[tree->n] = node;
//		tree->n++;
//	}
//}
//void PrintSeqTree(SqBTree* tree)
//{
//	for (int i = 0; i < tree->n; i++)
//	{
//		printf("%c", tree->data[i]);
//	}
//}
//
//int main()
//{
//	SqBTree T;
//	InitSeqTree(&T);
//	CreatSeqTree(&T);
//	PrintSeqTree(&T);
//	return 0;
//}