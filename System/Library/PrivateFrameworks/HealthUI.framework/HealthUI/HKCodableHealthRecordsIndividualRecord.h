@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying> {
    struct APPLE_120 { unsigned char dateData : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *codes;
@property (readonly, nonatomic) BOOL hasRecordTitle;
@property (retain, nonatomic) NSString *recordTitle;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (retain, nonatomic) NSMutableArray *valueWithRanges;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (retain, nonatomic) NSString *textualValue;
@property (readonly, nonatomic) BOOL hasUcumUnitString;
@property (retain, nonatomic) NSString *ucumUnitString;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSString *providerURI;
@property (readonly, nonatomic) BOOL hasRecordUUID;
@property (retain, nonatomic) NSString *recordUUID;

+ (Class)codeType;
+ (Class)valueWithRangeType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCode:(id)a0;
- (void)addValueWithRange:(id)a0;
- (void)clearCodes;
- (void)clearValueWithRanges;
- (id)codeAtIndex:(unsigned long long)a0;
- (unsigned long long)codesCount;
- (id)valueWithRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)valueWithRangesCount;

@end
