@class PBDataReader, NSString, GEOPDViewportInfo, GEOStructuredAddress, PBUnknownFields;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResults;
    struct { unsigned char has_maxResults : 1; unsigned char read_unknownFields : 1; unsigned char read_queryString : 1; unsigned char read_structuredAddress : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithForwardGeocodeAddressString:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)init;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithForwardGeocodeAddress:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)jsonRepresentation;
- (id)initWithForwardGeocodeAddress:(id)a0 addressString:(id)a1 maxResults:(unsigned int)a2 traits:(id)a3;

@end
