@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *cellId;
@property (readonly, nonatomic) NSNumber *baseId;

+ (id)cellIdInfoFromCellId:(unsigned long long)a0 baseId:(int)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
