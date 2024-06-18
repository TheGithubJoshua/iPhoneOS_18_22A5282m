@class NSNumber;

@interface SASTimeIntervalTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *transport;

- (id)initWithCoder:(id)a0;
- (double)timeInterval;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimeInterval:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
