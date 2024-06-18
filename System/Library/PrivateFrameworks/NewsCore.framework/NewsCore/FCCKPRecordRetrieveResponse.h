@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {
    FCCKPRecord *_record;
    BOOL _clientVersionETagMatch;
    struct { unsigned char clientVersionETagMatch : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
