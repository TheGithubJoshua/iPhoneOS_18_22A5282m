@class NSString, NSData;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {
    struct { unsigned char fhirVersionMajor : 1; unsigned char fhirVersionMinor : 1; unsigned char fhirVersionPatch : 1; unsigned char lastUpdatedDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic) BOOL hasLastUpdatedDate;
@property (nonatomic) double lastUpdatedDate;
@property (nonatomic) BOOL hasFhirVersionMajor;
@property (nonatomic) long long fhirVersionMajor;
@property (nonatomic) BOOL hasFhirVersionMinor;
@property (nonatomic) long long fhirVersionMinor;
@property (nonatomic) BOOL hasFhirVersionPatch;
@property (nonatomic) long long fhirVersionPatch;

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