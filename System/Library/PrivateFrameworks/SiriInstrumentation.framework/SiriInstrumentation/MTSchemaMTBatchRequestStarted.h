@class NSString, NSData;

@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numParagraphs : 1; } _has;
}

@property (nonatomic) unsigned int numParagraphs;
@property (nonatomic) BOOL hasNumParagraphs;
@property (copy, nonatomic) NSString *sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;

@end
