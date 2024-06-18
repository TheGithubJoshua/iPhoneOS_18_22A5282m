@class NSString;

@interface MAPushChannel : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)initWithIdentifier:(id)a0;
- (id)channelIDForPopulationType;
- (unsigned long long)hash;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)initWithPopulationType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)humanReadableChannelName;

@end
