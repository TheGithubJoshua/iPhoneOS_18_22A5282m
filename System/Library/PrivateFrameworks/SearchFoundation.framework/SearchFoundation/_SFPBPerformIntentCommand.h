@class NSString, NSData;

@interface _SFPBPerformIntentCommand : PBCodable <_SFPBPerformIntentCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSData *intentMessageData;
@property (nonatomic) BOOL isRunnableWorkflow;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;

@end
