@class NSString;

@interface BMScreenSharingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned long long type;
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
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsStart:(BOOL)a0;
- (id)initWithIsStart:(BOOL)a0 type:(unsigned long long)a1;

@end
