@class NSData;

@interface ORCHSchemaORCHFlowOutputSubmitted : SISchemaInstrumentationMessage {
    struct { unsigned char flowOutputSubmissionId : 1; unsigned char flowCommandReceived : 1; unsigned char flowCommandResponseError : 1; } _has;
}

@property (nonatomic) int flowOutputSubmissionId;
@property (nonatomic) BOOL hasFlowOutputSubmissionId;
@property (nonatomic) BOOL flowCommandReceived;
@property (nonatomic) BOOL hasFlowCommandReceived;
@property (nonatomic) BOOL flowCommandResponseError;
@property (nonatomic) BOOL hasFlowCommandResponseError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteFlowCommandReceived;
- (void)deleteFlowCommandResponseError;
- (void)deleteFlowOutputSubmissionId;

@end
