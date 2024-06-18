@class NSData;

@interface NLXSchemaCDMSingleServiceSetupAttemptStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceType : 1; unsigned char retryNumber : 1; } _has;
}

@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) unsigned int retryNumber;
@property (nonatomic) BOOL hasRetryNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteRetryNumber;
- (void)deleteServiceType;

@end
