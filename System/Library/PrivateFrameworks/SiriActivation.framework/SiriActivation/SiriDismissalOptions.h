@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deactivationOptions;
@property (readonly, nonatomic) BOOL animated;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) unsigned long long dismissalReason;
@property (readonly, nonatomic) BOOL shouldTurnScreenOff;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeactivationOptions:(unsigned long long)a0 animated:(BOOL)a1 dismissalReason:(unsigned long long)a2;
- (id)initWithDeactivationOptions:(unsigned long long)a0 animated:(BOOL)a1 requestCancellationReason:(long long)a2;
- (id)initWithDeactivationOptions:(unsigned long long)a0;
- (id)initWithDeactivationOptions:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithDeactivationOptions:(unsigned long long)a0 animated:(BOOL)a1 requestCancellationReason:(long long)a2 dismissalReason:(unsigned long long)a3;
- (id)initWithDeactivationOptions:(unsigned long long)a0 animated:(BOOL)a1 requestCancellationReason:(long long)a2 dismissalReason:(unsigned long long)a3 shouldTurnScreenOff:(BOOL)a4;

@end
