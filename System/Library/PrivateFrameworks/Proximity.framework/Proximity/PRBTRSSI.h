@interface PRBTRSSI : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) int rssi_dbm;
@property (readonly, nonatomic) int channel;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeStamp:(double)a0 rssi_dbm:(int)a1 channel:(int)a2;

@end
