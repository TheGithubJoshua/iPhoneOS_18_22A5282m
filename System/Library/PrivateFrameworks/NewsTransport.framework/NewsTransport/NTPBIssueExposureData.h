@class NSData;

@interface NTPBIssueExposureData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIssueSessionId;
@property (retain, nonatomic) NSData *issueSessionId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
