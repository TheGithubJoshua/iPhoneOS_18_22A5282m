@class NSString, ACProtobufURL;

@interface ACProtobufAccountType : PBCodable <NSCopying> {
    struct { unsigned char supportsAuthentication : 1; unsigned char visibility : 1; unsigned char obsolete : 1; unsigned char supportsMultipleAccounts : 1; } _has;
}

@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (nonatomic) BOOL hasVisibility;
@property (nonatomic) int visibility;
@property (readonly, nonatomic) BOOL hasCredentialType;
@property (retain, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) BOOL hasCredentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (nonatomic) BOOL hasSupportsAuthentication;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) BOOL hasSupportsMultipleAccounts;
@property (nonatomic) BOOL supportsMultipleAccounts;
@property (readonly, nonatomic) BOOL hasOwningBundleID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic) BOOL hasObsolete;
@property (nonatomic) BOOL obsolete;

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
