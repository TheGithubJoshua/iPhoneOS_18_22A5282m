@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage

@property (retain, nonatomic) NSArray *downloadAuths;
@property (retain, nonatomic) NSData *downloadingDeviceToken;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *downloadingDeviceID;
@property (retain, nonatomic) NSString *senderID;

- (long long)command;
- (id)messageBody;
- (id)init;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
