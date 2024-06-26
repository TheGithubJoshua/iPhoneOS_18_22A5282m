@class NSString;

@interface PPM2NamedEntityDonationError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
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
