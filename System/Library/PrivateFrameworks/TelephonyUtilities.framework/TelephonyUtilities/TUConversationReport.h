@class NSUUID, NSDate;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timebase;
@property (readonly, nonatomic) NSUUID *conversationID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConversationID:(id)a0 timebase:(id)a1;
- (BOOL)isEqualToConversationReport:(id)a0;

@end
