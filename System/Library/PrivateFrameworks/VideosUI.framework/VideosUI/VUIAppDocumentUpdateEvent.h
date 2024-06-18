@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)entitlements;
+ (id)preferredVideoFormat;
+ (id)settings;
+ (id)utsk;
+ (id)highlightsChanged;
+ (id)accountChanged;
+ (id)restrictions;
+ (id)favorites;
+ (id)purchases;
+ (id)playActivity;
+ (id)appDidBecomeActive;
+ (id)appRefresh;
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesSyncCompleted;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)iamMessageReceived;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)playHistoryUpdated;
+ (id)removeFromPlayHistory;
+ (id)upNextLockupArtSettingChanged;

- (id)init;
- (id)initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coalescedEvent:(id)a0;

@end
