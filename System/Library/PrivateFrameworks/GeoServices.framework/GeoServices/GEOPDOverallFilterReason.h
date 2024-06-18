@class PBUnknownFields;

@interface GEOPDOverallFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _proxyErrorHttpStatus;
    int _reasonType;
    struct { unsigned char has_proxyErrorHttpStatus : 1; unsigned char has_reasonType : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
