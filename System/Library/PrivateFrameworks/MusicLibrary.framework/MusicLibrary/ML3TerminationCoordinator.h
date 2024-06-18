@class NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3TerminationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (class, readonly, nonatomic) ML3TerminationCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL isSigned;

- (BOOL)isSignedForReason:(long long)a0;
- (id)init;
- (void)execute;
- (void)secedeForReason:(long long)a0;
- (void)signForReason:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_performTermination;

@end
