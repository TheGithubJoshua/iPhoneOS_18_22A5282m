@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}

@property (readonly, nonatomic) BOOL isSetupComplete;

- (id)init;
- (void)setupComplete:(BOOL)a0 info:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)_noteDisconnected;
- (void)forwardInvocation:(id)a0;
- (void)removeHandler:(id)a0;
- (void).cxx_destruct;
- (void)addHandler:(id)a0;

@end
