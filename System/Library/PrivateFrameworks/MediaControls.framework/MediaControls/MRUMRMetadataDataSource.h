@class MRNowPlayingPlayerResponse, NSString, MRUArtwork, MRUNowPlayingInfo, MRUTimeControls, MRUEndpointController, MRUTransportControls;
@protocol MRUMetadataDataSourceDelegate;

@interface MRUMRMetadataDataSource : NSObject <MRUEndpointControllerObserver, MPArtworkCacheReference, _MCStateDumpPropertyListTransformable, MRUMetadataDataSource>

@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) MRUEndpointController *endpointController;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) MRUArtwork *artwork;
@property (readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) MRUTimeControls *timeControls;
@property (readonly, nonatomic) MRUTransportControls *transportControls;
@property (weak, nonatomic) id<MRUMetadataDataSourceDelegate> delegate;

- (id)init;
- (id)placeholder;
- (void)updateArtwork;
- (id)_stateDumpObject;
- (void)endpointController:(id)a0 didChangeRoute:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateData;
- (void)endpointController:(id)a0 didChangeState:(long long)a1;
- (id)initWithEndpointController:(id)a0 response:(id)a1;
- (id)placeholderSymbolName;
- (void)updateArtworkWithResponse:(id)a0;
- (void)updateBundleIDWithResponse:(id)a0;
- (void)updateNowPlayingInfoWithResponse:(id)a0;

@end
