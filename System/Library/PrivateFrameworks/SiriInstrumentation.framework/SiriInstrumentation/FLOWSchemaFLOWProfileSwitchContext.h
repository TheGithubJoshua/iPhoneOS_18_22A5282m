@class NSData;

@interface FLOWSchemaFLOWProfileSwitchContext : SISchemaInstrumentationMessage {
    struct { unsigned char profileSwitchMethod : 1; unsigned char profileSwitchByNameType : 1; unsigned char profileSwitchOutcome : 1; unsigned char profileSwitchFailureReason : 1; unsigned char profileSwitchDurationInMs : 1; } _has;
}

@property (nonatomic) int profileSwitchMethod;
@property (nonatomic) BOOL hasProfileSwitchMethod;
@property (nonatomic) int profileSwitchByNameType;
@property (nonatomic) BOOL hasProfileSwitchByNameType;
@property (nonatomic) int profileSwitchOutcome;
@property (nonatomic) BOOL hasProfileSwitchOutcome;
@property (nonatomic) int profileSwitchFailureReason;
@property (nonatomic) BOOL hasProfileSwitchFailureReason;
@property (nonatomic) unsigned int profileSwitchDurationInMs;
@property (nonatomic) BOOL hasProfileSwitchDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteProfileSwitchDurationInMs;
- (void)deleteProfileSwitchByNameType;
- (void)deleteProfileSwitchFailureReason;
- (void)deleteProfileSwitchMethod;
- (void)deleteProfileSwitchOutcome;

@end
