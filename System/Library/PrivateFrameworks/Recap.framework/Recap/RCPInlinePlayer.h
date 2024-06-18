@class RCPPlayer, NSObject;
@protocol OS_dispatch_queue;

@interface RCPInlinePlayer : NSObject

@property (retain, nonatomic) RCPPlayer *underlyingPlayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replayQueue;
@property (nonatomic) BOOL needsInitialDelay;
@property (nonatomic) BOOL ignoresCompletionDelay;

+ (void)setNeedsInitialDelay;
+ (id)sharedInstance;
+ (void)playEventStream:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)playEventActions:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)setIgnoresCompletionDelay:(BOOL)a0;
+ (void)playCommandString:(id)a0 options:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (void)_doInitialDelayIfNeeded;
- (void)tearDown;
- (void)prewarmForEventStream:(id)a0 completion:(id /* block */)a1;
- (void)playEventStream:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_callBlock:(id /* block */)a0;
- (void)playEventActions:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)playCommandString:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end