@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_clusterMembers;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *clusterMembers;

+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;
+ (void *)logicalLeaderFromOutputDevices:(id)a0;

- (long long)clusterType;
- (BOOL)isKnown;
- (BOOL)requiresPassword;
- (BOOL)isStereoPair;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)isHomePodRoute;
- (BOOL)supportsWirelessDisplay;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)isPicked;
- (BOOL)isProxyGroupPlayer;
- (BOOL)canFetchMediaDataFromSender;
- (id)clusterComposition;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isVolumeControlAvailable;
- (BOOL)canAccessRemoteAssets;
- (BOOL)isAppleAccessory;
- (BOOL)isLowFidelityRoute;
- (id)routeUID;
- (long long)pickableRouteType;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (long long)routeSubtype;
- (id)initWithOutputDevices:(id)a0;
- (id)clusterCompositionRoutes;
- (id)subRoutes;
- (BOOL)isAirPlayRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)headTrackedSpatialAudioEnabled;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isHomeTheaterRoute;
- (id)groupUID;
- (long long)routeType;
- (BOOL)isClusterRoute;
- (BOOL)isMacRoute;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (BOOL)isDeviceRoute;
- (BOOL)isPhoneRoute;
- (long long)originalRouteSubtype;
- (id)routeName;
- (void).cxx_destruct;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (BOOL)supportsGrouping;
- (id)description;
- (BOOL)isB520Route;
- (id)playingPairedDeviceName;
- (BOOL)isSplitterCapable;
- (BOOL)isLowLatencyRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isPickable;
- (id)productIdentifier;
- (BOOL)isNearby;
- (BOOL)isCarplayRoute;
- (BOOL)isPickedOnPairedDevice;

@end
