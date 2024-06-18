@interface WiFiChannel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL extensionChannelAbove;
@property (readonly, nonatomic) unsigned int channelNumber;
@property (readonly, nonatomic) BOOL is2_4GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;
@property (readonly, nonatomic) long long bandwidth;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithChannelNumber:(unsigned int)a0 bandwidth:(long long)a1 is2_4GHz:(BOOL)a2 is5GHz:(BOOL)a3 isDFS:(BOOL)a4 extensionChannelAbove:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
