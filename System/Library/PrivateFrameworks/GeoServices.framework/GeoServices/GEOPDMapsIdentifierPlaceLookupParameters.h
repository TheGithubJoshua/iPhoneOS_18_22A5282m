@class NSMutableArray, PBUnknownFields;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    struct { unsigned char has_resultProviderId : 1; unsigned char has_enablePartialClientization : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1;
- (id)jsonRepresentation;

@end
