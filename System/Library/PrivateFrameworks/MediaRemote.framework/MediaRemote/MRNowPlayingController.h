@class MRNowPlayingPlayerResponse, MRNowPlayingControllerConfiguration, MRDestination, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue, MRNowPlayingControllerImpl, MRNowPlayingControllerDelegate;

@interface MRNowPlayingController : NSObject

@property (retain, nonatomic) id<MRNowPlayingControllerImpl> impl;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSDate *allocationDate;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *lastInitialLoadDate;
@property (retain, nonatomic) NSDate *lastInvalidationDate;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (weak, nonatomic) id<MRNowPlayingControllerDelegate> delegate;
@property (readonly, copy, nonatomic) MRDestination *destination;

+ (id)proactiveEndpointController;
+ (id)localRouteController;
+ (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 options:(id)a2 appOptions:(unsigned int)a3 withCompletion:(id /* block */)a4;
+ (void)performRequest:(id)a0 withCompletion:(id /* block */)a1;

- (void)_notifyDelegateOfUpdate;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)a0;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)a0;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)a0;
- (void)endLoadingUpdates;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)a0;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegateOfPlayerPathChange:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 completion:(id /* block */)a3;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)a0;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfError:(id)a0;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)dealloc;
- (id)playerPath;
- (void)beginLoadingUpdates;
- (id)createImplWithConfiguration:(id)a0;
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)a0;

@end
