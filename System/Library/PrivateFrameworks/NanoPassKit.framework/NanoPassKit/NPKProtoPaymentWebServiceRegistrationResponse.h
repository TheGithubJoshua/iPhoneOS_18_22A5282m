@class NSData;

@interface NPKProtoPaymentWebServiceRegistrationResponse : PBCodable <NSCopying> {
    struct { unsigned char registrationResult : 1; unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasRegistrationResult;
@property (nonatomic) unsigned int registrationResult;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (readonly, nonatomic) BOOL hasWebServiceContextData;
@property (retain, nonatomic) NSData *webServiceContextData;

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