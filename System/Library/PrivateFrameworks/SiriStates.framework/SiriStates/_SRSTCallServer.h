@class _SRSTCallState;

@interface _SRSTCallServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTCallState *currentState;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
