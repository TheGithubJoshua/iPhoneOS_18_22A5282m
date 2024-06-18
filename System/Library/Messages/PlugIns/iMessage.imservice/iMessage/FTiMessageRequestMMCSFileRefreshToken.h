@class NSString, NSData, NSNumber;

@interface FTiMessageRequestMMCSFileRefreshToken : IDSMessage <NSCopying>

@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSNumber *fileLength;
@property (copy, nonatomic) NSString *authURL;
@property (copy, nonatomic) NSNumber *requestContentVersion;
@property (copy, nonatomic) NSString *requestContentHeaders;
@property (copy, nonatomic) NSNumber *responseContentVersion;
@property (copy, nonatomic) NSString *responseContentHeaders;
@property (copy, nonatomic) NSData *responseContentBody;

- (long long)command;
- (id)messageBody;
- (id)init;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)requiredKeys;

@end
