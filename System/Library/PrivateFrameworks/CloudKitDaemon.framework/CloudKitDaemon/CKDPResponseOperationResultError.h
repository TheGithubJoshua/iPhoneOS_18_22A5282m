@class CKDPResponseOperationResultErrorServer, CKDPResponseOperationResultErrorAuxiliaryError, CKDPResponseOperationResultErrorExtension, NSString, CKDPResponseOperationResultErrorClient;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) BOOL hasServerError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError;
@property (readonly, nonatomic) BOOL hasAuxiliaryError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;
@property (readonly, nonatomic) BOOL hasErrorInternal;
@property (retain, nonatomic) NSString *errorInternal;

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
