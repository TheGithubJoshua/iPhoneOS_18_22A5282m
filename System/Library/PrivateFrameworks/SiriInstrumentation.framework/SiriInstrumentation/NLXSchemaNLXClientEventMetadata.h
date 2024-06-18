@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaNLXClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char componentInvocationSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *nlId;
@property (nonatomic) BOOL hasNlId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int componentInvocationSource;
@property (nonatomic) BOOL hasComponentInvocationSource;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteComponentInvocationSource;
- (void)deleteRequestId;
- (void)deleteNlId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;

@end
