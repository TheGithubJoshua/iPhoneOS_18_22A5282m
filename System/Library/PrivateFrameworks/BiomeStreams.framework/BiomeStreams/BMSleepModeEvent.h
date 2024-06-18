@class NSString, NSDate;

@interface BMSleepModeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) unsigned long long sleepModeState;
@property (readonly, nonatomic) unsigned long long sleepModeChangeReason;
@property (readonly, nonatomic) NSDate *expectedEndDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (id)initWithSleepModeState:(unsigned long long)a0 sleepModeChangeReason:(unsigned long long)a1 expectedEndDate:(id)a2;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSleepModeState:(unsigned long long)a0;

@end
