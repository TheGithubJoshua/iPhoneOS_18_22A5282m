@class NSString, NSData;

@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeIntervalSince2001InMs : 1; unsigned char durationInMs : 1; unsigned char lineNumber : 1; } _has;
}

@property (nonatomic) double startTimeIntervalSince2001InMs;
@property (nonatomic) BOOL hasStartTimeIntervalSince2001InMs;
@property (nonatomic) double durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) BOOL hasFileId;
@property (nonatomic) int lineNumber;
@property (nonatomic) BOOL hasLineNumber;
@property (copy, nonatomic) NSString *callingFunction;
@property (nonatomic) BOOL hasCallingFunction;
@property (copy, nonatomic) NSString *measurementLabel;
@property (nonatomic) BOOL hasMeasurementLabel;
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
- (void)deleteCallingFunction;
- (void)deleteDurationInMs;
- (void)deleteFileId;
- (void)deleteLineNumber;
- (void)deleteMeasurementLabel;
- (void)deleteStartTimeIntervalSince2001InMs;

@end
