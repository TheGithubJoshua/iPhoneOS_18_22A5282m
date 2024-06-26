@class NSNumber;

@interface CTCAConversationState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestReason;
@property (retain, nonatomic) NSNumber *conversationId;
@property (nonatomic) BOOL committed;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
