@class NSString;

@interface BMSiriAnnotatedEntityGroupIdentifier : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) unsigned int seq;
@property (nonatomic) BOOL hasSeq;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroupID:(id)a0 seq:(id)a1;

@end
