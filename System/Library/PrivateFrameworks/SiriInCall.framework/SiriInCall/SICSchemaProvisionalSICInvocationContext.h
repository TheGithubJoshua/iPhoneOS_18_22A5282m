@class SICSchemaProvisionalSICInvocationEnded, SICSchemaProvisionalSICInvocationStarted, NSData, SICSchemaProvisionalSICInvocationCancelled;

@interface SICSchemaProvisionalSICInvocationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SICSchemaProvisionalSICInvocationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
