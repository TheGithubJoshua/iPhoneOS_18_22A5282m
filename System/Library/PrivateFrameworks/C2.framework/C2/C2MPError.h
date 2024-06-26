@class NSString;

@interface C2MPError : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) C2MPError *underlyingError;

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
