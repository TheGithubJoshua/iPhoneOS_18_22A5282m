@class NSString;

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (copy, nonatomic) NSString *senderTokenName;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (unsigned long long)pushType;
- (void)setPushFlags:(unsigned int)a0;
- (unsigned int)pushFlags;
- (void)setChannelID:(id)a0;
- (void)setPushType:(unsigned long long)a0;
- (unsigned long long)_effectiveSendTimeout;
- (id)channelID;
- (void)setCancelled:(BOOL)a0;
- (void)setPriority:(long long)a0;
- (void)setOriginator:(id)a0;
- (void)setSendInterface:(long long)a0;
- (BOOL)isEager;
- (id)originator;
- (id)sentTimestamp;
- (BOOL)wasCancelled;
- (void)setTimedOut:(BOOL)a0;
- (void)setSentTimestamp:(id)a0;
- (void)setMessageID:(unsigned long long)a0;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (id)rawTimeoutTime;
- (void)setSent:(BOOL)a0;
- (unsigned long long)messageID;
- (id)sendTimeoutTime;
- (void)setTimestamp:(id)a0;
- (id)timestamp;
- (BOOL)wasSent;
- (long long)sendInterface;
- (long long)priority;

@end
