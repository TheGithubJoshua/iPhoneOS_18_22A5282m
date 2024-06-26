@class REMChangeToken, NSDate;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastConsumedDate;
@property (retain, nonatomic) REMChangeToken *lastConsumedChangeToken;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
