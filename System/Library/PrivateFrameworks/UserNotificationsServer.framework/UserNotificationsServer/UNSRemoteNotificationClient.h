@class NSString, NSData;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *tokenIdentifier;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSData *lastKnownDeviceToken;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end