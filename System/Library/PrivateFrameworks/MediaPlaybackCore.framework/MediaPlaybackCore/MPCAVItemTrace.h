@class NSString, MPAVItem;

@interface MPCAVItemTrace : NSObject

@property (retain, nonatomic) NSString *name;
@property (weak, nonatomic) MPAVItem *item;
@property (nonatomic) unsigned int endEvent;
@property (nonatomic) double started;
@property (nonatomic) double ended;

+ (id)traceIntervalWithName:(id)a0 item:(id)a1 beginEvent:(unsigned int)a2 endEvent:(unsigned int)a3;
+ (void)traceWithName:(id)a0 item:(id)a1 event:(unsigned int)a2;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endInterval;

@end
