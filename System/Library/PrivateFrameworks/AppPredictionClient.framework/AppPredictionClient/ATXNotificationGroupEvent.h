@class NSUUID, NSString, NSDate;

@interface ATXNotificationGroupEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)jsonRawData;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithEventType:(long long)a0 uuid:(id)a1 eventDate:(id)a2;
- (void).cxx_destruct;

@end
