@class NSString, NSData;

@interface BMSiriPrivateLearningSELFEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSData *eventData;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 eventData:(id)a2;

@end
