@interface WebCache : NSObject

+ (void)empty;
+ (void)initialize;
+ (BOOL)isDisabled;
+ (void)setDisabled:(BOOL)a0;
+ (id)statistics;
+ (struct CGImage { } *)imageForURL:(id)a0;
+ (void)clearCachedCredentials;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)a0;

@end
