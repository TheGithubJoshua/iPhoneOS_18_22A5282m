@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement>

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPFinderStateXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ stateChangedBlock;
@property (copy, nonatomic) id /* block */ stateInfoChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)remoteInterface;
- (void)disableFinderModeWithCompletion:(id /* block */)a0;
- (void)start;
- (void)updateStateBlock;
- (void)enableFinderModeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setActiveCache:(long long)a0 completion:(id /* block */)a1;
- (void)stateInfoWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)fetchFinderState:(id /* block */)a0;

@end
