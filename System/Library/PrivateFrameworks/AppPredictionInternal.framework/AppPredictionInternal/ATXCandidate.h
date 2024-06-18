@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)initWithCoder:(id)a0;
- (id)detailedDescription;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifier;
- (id)type;
- (long long)suggestionExecutableType;
- (id)initWithBiomeStoreData:(id)a0;
- (BOOL)isEqualToATXCandidate:(id)a0;

@end
