@class NSData, NSString, NSDate;

@interface IDSServerMessagingMessage : IDSMessage

@property (retain, nonatomic) NSData *messageData;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *messageID;

- (long long)command;
- (id)messageBody;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsResponse;

@end
