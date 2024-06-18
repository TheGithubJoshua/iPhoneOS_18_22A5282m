@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WFDebouncer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *targetTable;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double maximumDelay;
@property (readonly, nonatomic) id userInfo;

- (void)addTarget:(id)a0 action:(SEL)a1;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2 userInfo:(id)a3;
- (void)fire;
- (void)restartDelayTimer;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)startMaximumDelayTimerIfNecessary;
- (void)poke;
- (void)resetDelayTimer;
- (void)resetMaximumDelayTimer;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2;
- (id)initWithDelay:(double)a0 queue:(id)a1;

@end
