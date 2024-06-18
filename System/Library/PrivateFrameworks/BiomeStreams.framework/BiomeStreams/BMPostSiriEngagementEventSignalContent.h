@class NSString;

@interface BMPostSiriEngagementEventSignalContent : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
