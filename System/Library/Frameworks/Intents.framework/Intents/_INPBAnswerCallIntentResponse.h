@class NSArray, NSString, _INPBConnectedCall;

@interface _INPBAnswerCallIntentResponse : PBCodable <_INPBAnswerCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char statusCode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBConnectedCall *answeredCall;
@property (readonly, nonatomic) BOOL hasAnsweredCall;
@property (copy, nonatomic) NSArray *callRecords;
@property (readonly, nonatomic) unsigned long long callRecordsCount;
@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)callRecordsType;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (void)addCallRecords:(id)a0;
- (id)callRecordsAtIndex:(unsigned long long)a0;
- (void)clearCallRecords;

@end
