@interface SXClassFactory : NSObject

+ (void)startTesting;
+ (void)initialize;
+ (void)stopTesting;
+ (void)registerClass:(Class)a0 type:(id)a1 baseClass:(Class)a2;
+ (id /* block */)valueClassBlockForBaseClass:(Class)a0;
+ (Class)classForBaseClass:(Class)a0 type:(id)a1;

@end
