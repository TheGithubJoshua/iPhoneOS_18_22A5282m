@class NSDate;

@interface CTStewieDeviceOrientationData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL targetLocked;
@property (nonatomic) BOOL isDeviceStationary;
@property (nonatomic) long long x;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
