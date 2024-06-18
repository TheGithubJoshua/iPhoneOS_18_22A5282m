@class SICSchemaProvisionalSICClientEventMetadata, SICSchemaProvisionalSICInvocationContext, NSData;

@interface SICSchemaProvisionalSICClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SICSchemaProvisionalSICClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic) BOOL hasSiriInCallInvocationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)getVersion;
- (id)initWithDictionary:(id)a0;
- (id)getTypeId;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)isProvisional;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;

@end
