@class NSString, ICSharedListeningItem;

@interface ICSharedListeningContainer : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) ICSharedListeningItem *seedItem;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, copy, nonatomic) NSString *shortDescription;

+ (id)albumContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;
+ (id)autoPlayContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;
+ (id)groupWithFeatureName:(id)a0;
+ (id)playlistContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;
+ (id)radioContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;
+ (id)radioContainerWithSeedItem:(id)a0 featureName:(id)a1;

- (id)initWithProtobuf:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithKind:(long long)a0 mediaIdentifier:(id)a1 featureName:(id)a2;
- (id)_initWithKind:(long long)a0 seedItem:(id)a1 featureName:(id)a2;

@end
