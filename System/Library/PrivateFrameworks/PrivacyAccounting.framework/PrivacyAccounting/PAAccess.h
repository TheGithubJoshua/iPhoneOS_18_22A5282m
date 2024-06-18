@class NSArray, NSString, PAApplication, NSUUID, NSSet;

@interface PAAccess : NSObject <NSCopying, NSSecureCoding, BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) NSArray *allAccessClasses;
@property (class, readonly, nonatomic) NSString *eventStreamIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) long long visibilityState;
@property (readonly, nonatomic) PAApplication *accessor;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (readonly, nonatomic) double timestampAdjustment;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *descriptionForCategory;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)JSONObject;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)asIntervalEndEventWithTimestampAdjustment:(double)a0;
- (id)proto;
- (id)copyWithNewIdentifier:(id)a0;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 assetIdentifiers:(id)a3 visibilityState:(long long)a4 accessEventCount:(unsigned long long)a5;
- (id)asIntervalEventWithAssetIdentifiers:(id)a0 visibilityState:(long long)a1 accessEventCount:(unsigned long long)a2;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (id)asIntervalBeginEvent;
- (id)initWithAccessor:(id)a0 assetIdentifiers:(id)a1;
- (id)initWithAccessor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithNewKind:(long long)a0;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithNewAccessor:(id)a0;
- (id)copyWithNewTimestampAdjustment:(double)a0;
- (id)copyWithNewAssetIdentifiers:(id)a0;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 assetIdentifiers:(id)a3;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2;
- (id)descriptionForKind;

@end
