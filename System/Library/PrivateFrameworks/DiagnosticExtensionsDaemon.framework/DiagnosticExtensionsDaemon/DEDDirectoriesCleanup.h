@interface DEDDirectoriesCleanup : NSObject

+ (BOOL)shouldRun;
+ (BOOL)isDryRun;
+ (void)run;
+ (void)didRun;

@end
