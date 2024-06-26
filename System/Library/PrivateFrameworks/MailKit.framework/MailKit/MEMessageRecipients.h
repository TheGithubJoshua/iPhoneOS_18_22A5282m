@class NSArray;

@interface MEMessageRecipients : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *to;
@property (readonly, copy, nonatomic) NSArray *cc;
@property (readonly, copy, nonatomic) NSArray *bcc;
@property (readonly, copy, nonatomic) NSArray *replyTo;
@property (readonly, copy, nonatomic) NSArray *allRecipients;

+ (id)emailAddressesForEmailAddressStrings:(id)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStringsTo:(id)a0 cc:(id)a1 bcc:(id)a2 replyTo:(id)a3;
- (id)initWithTo:(id)a0 cc:(id)a1 bcc:(id)a2 replyTo:(id)a3;

@end
