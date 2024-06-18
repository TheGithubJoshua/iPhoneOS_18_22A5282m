@class NSString, NSDictionary;

@interface WBSCRDTPositionSortValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sortValue;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long changeID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)positionSortValueWithSortValue:(long long)a0;
- (id)initWithSortValue:(long long)a0 deviceIdentifier:(id)a1 changeID:(long long)a2;
- (BOOL)isEqualToPositionSortValue:(id)a0;
- (id)positionSortValueWithChangeID:(long long)a0;

@end
