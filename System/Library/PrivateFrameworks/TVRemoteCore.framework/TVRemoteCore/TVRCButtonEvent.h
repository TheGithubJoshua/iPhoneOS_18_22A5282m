@class TVRCButton, NSDate;

@interface TVRCButtonEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) TVRCButton *button;
@property (readonly, nonatomic) long long eventType;

+ (id)buttonEventForButton:(id)a0 eventType:(long long)a1;

- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
