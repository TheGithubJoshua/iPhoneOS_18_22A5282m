@class NSString;

@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithString:(id)a0;
- (id)initWithShardEntries:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEmptyVersion;
- (void)encodeWithCoder:(id)a0;
- (id)initEmptyVersion;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
