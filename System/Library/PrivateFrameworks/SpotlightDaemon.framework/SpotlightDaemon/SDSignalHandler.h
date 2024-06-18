@interface SDSignalHandler : NSObject

+ (void)addMemoryHandler;
+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)addSignalHandler;
+ (void)setupHandlers;

@end
