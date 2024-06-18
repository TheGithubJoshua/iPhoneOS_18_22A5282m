@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicConversionStats : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;

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

@end
