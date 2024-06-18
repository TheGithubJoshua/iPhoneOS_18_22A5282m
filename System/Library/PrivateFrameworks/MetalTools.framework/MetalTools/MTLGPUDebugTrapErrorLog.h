@class NSString;

@interface MTLGPUDebugTrapErrorLog : MTLGPUDebugGPULog

@property (retain, nonatomic) NSString *functionName;

- (id)description;
- (void)dealloc;

@end
