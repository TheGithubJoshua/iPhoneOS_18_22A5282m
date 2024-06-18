@class NSString, NSNumber;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int reason;
@property (nonatomic) int clss;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *saveNumber;
@property (retain, nonatomic) NSNumber *noReplyTime;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
