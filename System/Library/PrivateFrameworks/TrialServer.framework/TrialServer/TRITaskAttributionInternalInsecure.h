@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) int triCloudKitContainer;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) TRIDownloadOptions *networkOptions;

+ (id)taskAttributionFirstPartyWithNetworkOptions:(id)a0;
+ (id)taskAttributionFromPersistedTask:(id)a0;
+ (id)taskAttributionWithTeamIdentifier:(id)a0 triCloudKitContainer:(int)a1 applicationBundleIdentifier:(id)a2 networkOptions:(id)a3;

- (id)init;
- (id)asPersistedTaskAttribution;
- (id)copyWithReplacementNetworkOptions:(id)a0;
- (id)copyWithReplacementTeamIdentifier:(id)a0;
- (id)initWithTeamIdentifier:(id)a0 triCloudKitContainer:(int)a1 applicationBundleIdentifier:(id)a2 networkOptions:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTaskAttribution:(id)a0;
- (id)copyWithReplacementTriCloudKitContainer:(int)a0;
- (id)copyWithReplacementApplicationBundleIdentifier:(id)a0;

@end
