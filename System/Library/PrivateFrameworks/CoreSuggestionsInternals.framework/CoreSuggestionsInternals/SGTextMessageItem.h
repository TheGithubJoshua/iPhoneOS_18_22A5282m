@class NSString, NSArray, NSDate, SGTextMessage;

@interface SGTextMessageItem : NSObject <NSSecureCoding, SGConversationTurnProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SGTextMessage *message;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *senderID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) NSString *language;
@property (readonly) NSArray *detectedData;
@property (retain) NSArray *features;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToConversationTurn:(id)a0;
- (id)initWithTextMessage:(id)a0;
- (id)initWithTextMessage:(id)a0 detectedData:(id)a1;

@end