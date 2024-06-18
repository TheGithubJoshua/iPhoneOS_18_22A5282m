@class NSString, MRUEndpointController;
@protocol MRUTVRemoteControllerDelegate;

@interface MRUTVRemoteController : NSObject <MRUEndpointControllerObserver, _MCStateDumpPropertyListTransformable>

@property (readonly, nonatomic) MRUEndpointController *endpointController;
@property (weak, nonatomic) id<MRUTVRemoteControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL showTVRemote;
@property (nonatomic) long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEndpointController:(id)a0;
- (id)_stateDumpObject;
- (void)endpointController:(id)a0 didChangeRoute:(id)a1;
- (long long)launchContext;
- (void).cxx_destruct;
- (id)mediaRemoteIdentifier;
- (void)presentTVRemoteUsingApp:(BOOL)a0;
- (void)updateShowTVRemote;
- (void)prewarmIfNeeded;
- (id)airplayIdentifier;

@end
