@class NSString, NSDictionary, NSDate, AMSXDDevice;
@protocol NSSecureCoding, NSObject;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *objectClassName;
@property (nonatomic) BOOL isReply;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSDate *receiptDate;
@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (retain, nonatomic) AMSXDDevice *destination;
@property (nonatomic) double expirationInterval;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) id<NSObject, NSSecureCoding> object;
@property (retain, nonatomic) AMSXDDevice *origin;
@property (nonatomic) long long purpose;

+ (id)_allowedClassesForDecoding;
+ (id)_allowedClassNamesForDecoding;
+ (id)messageFromProtoMessage:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createProtoMessage;
- (id)initWithIdentifier:(id)a0 destination:(id)a1 purpose:(long long)a2 object:(id)a3;
- (id)initWithJSONDictionary:(id)a0;

@end
