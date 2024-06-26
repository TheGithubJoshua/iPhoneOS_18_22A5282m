@class NSString, NSDate;

@interface PIFeatureFeedbackEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *feature;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeature:(id)a0 type:(unsigned long long)a1 date:(id)a2;

@end
