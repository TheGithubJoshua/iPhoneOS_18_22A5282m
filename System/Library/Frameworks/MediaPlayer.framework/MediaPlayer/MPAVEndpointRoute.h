@class MPAVOutputDeviceRoute, NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *predictedOutputDevice;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (long long)clusterType;
- (BOOL)isStereoPair;
- (id)initWithCoder:(id)a0;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)isHomePodRoute;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)isProxyGroupPlayer;
- (BOOL)canFetchMediaDataFromSender;
- (id)clusterComposition;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)canAccessRemoteAssets;
- (BOOL)isLowFidelityRoute;
- (id)routeUID;
- (long long)routeSubtype;
- (void)resetPredictedOutputDevice;
- (BOOL)isAppleTVRoute;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isHomeTheaterRoute;
- (id)groupUID;
- (long long)routeType;
- (BOOL)isClusterRoute;
- (BOOL)isMacRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isPhoneRoute;
- (void)encodeWithCoder:(id)a0;
- (long long)originalRouteSubtype;
- (id)initWithEndpoint:(void *)a0;
- (id)routeName;
- (void).cxx_destruct;
- (BOOL)supportsGrouping;
- (id)description;
- (BOOL)isB520Route;
- (BOOL)isSplitRoute;
- (BOOL)isSplitterCapable;
- (void)dealloc;
- (BOOL)isLowLatencyRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isPickable;
- (id)productIdentifier;
- (id)routeNames;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (id)designatedGroupLeaderName;
- (id)effectiveGroupLeader;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isTVRoute;
- (long long)numberOfOutputDevices;
- (BOOL)supportsRemoteControl;

@end
