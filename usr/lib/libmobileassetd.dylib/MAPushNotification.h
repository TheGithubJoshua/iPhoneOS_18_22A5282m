@class NSDictionary;

@interface MAPushNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *pushPayload;

- (id)initWithCoder:(id)a0;
- (id)initWithUserInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
