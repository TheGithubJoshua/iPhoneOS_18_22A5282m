@class NSString, NSArray;

@interface MTIDScheme : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *idNamespace;
@property (nonatomic) long long idType;
@property (nonatomic) long long rotationSchedule;
@property (nonatomic) long long lifespan;
@property (copy, nonatomic) NSArray *correlations;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) unsigned long long localHash;
@property (nonatomic) unsigned long long correlationHash;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic) BOOL isDefault;
@property (readonly, nonatomic) unsigned long long storagePoolSize;
@property (readonly, nonatomic) double maxFutureTimeInterval;
@property (readonly, nonatomic) double maxPastTimeInterval;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)calculateHash;
- (id)initWithNamespace:(id)a0 options:(id)a1;
- (id)initWithNamespace:(id)a0 type:(long long)a1;
- (void)overrideLifespanMaybe;

@end
