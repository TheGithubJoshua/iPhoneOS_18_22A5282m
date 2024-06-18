@class NFApplet, NSString, NSNumber;

@interface NFDigitalCarKeyEndEvent : NSObject <NSSecureCoding> {
    NSString *_appletIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NFApplet *applet;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) BOOL didError;
@property (readonly, nonatomic) unsigned int result;
@property (readonly, nonatomic) NSNumber *brandCode;

- (id)initWithCoder:(id)a0;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)appletIdentifier;
- (void)_setApplet:(id)a0;
- (id)initFromContactlessPaymentEndEvent:(id)a0;

@end
