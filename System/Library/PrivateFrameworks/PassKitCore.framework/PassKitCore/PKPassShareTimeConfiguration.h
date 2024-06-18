@class NSArray, NSDate;

@interface PKPassShareTimeConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long support;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSArray *schedules;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)intersect:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPassShareTimeConfiguration:(id)a0;

@end
