@interface _UIObjectPerCanvas : NSObject

+ (id)objectOfClass:(Class)a0 forCanvas:(id)a1 withOptions:(id)a2 createIfNecessary:(BOOL)a3;
+ (void)removeObject:(id)a0;
+ (void)canvasDisconnected:(id)a0;
+ (void)removeObjectsOfClass:(Class)a0;

@end
