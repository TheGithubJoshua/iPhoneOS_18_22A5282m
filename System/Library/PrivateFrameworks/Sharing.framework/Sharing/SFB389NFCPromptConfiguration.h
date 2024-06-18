@class NSString, NSUUID;

@interface SFB389NFCPromptConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *userMessage;
@property (retain, nonatomic) NSUUID *baUUID;
@property (nonatomic) unsigned long long promptState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
