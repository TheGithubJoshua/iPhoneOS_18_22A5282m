@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (long long)command;
- (BOOL)highPriority;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsIDSProtocolVersion;
- (id)topic;
- (BOOL)isWebTunnelMessage;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsCompressedBody;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
