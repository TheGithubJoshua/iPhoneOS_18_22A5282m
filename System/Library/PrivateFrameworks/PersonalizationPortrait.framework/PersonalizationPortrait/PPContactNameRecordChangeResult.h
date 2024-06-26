@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) BOOL changesTruncated;

+ (id)contactNameRecordChangeResultWithChanges:(id)a0 changesTruncated:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChanges:(id)a0 changesTruncated:(BOOL)a1;
- (BOOL)isEqualToContactNameRecordChangeResult:(id)a0;

@end
