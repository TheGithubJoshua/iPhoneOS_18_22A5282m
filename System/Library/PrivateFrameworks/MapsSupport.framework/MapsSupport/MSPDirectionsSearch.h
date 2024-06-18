@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char navigationInterrupted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic) BOOL hasNavigationInterrupted;
@property (nonatomic) BOOL navigationInterrupted;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
