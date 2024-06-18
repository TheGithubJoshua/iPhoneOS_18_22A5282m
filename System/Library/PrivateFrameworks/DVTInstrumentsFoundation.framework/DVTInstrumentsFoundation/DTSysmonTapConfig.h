@class NSArray;

@interface DTSysmonTapConfig : DTTapConfig

@property (nonatomic) unsigned long long sampleInterval;
@property (retain) NSArray *processAttributes;
@property (retain) NSArray *systemAttributes;
@property (retain) NSArray *coalitionAttributes;
@property BOOL sampleCPUUsage;
@property (copy, nonatomic) id /* block */ sessionHandler;

- (id)init;
- (void)addPid:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pids;
- (void)setPids:(id)a0;

@end
