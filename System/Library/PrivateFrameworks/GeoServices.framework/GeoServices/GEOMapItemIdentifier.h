@class NSData, GEOPDMapsIdentifier;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOPDMapsIdentifier *_mapsIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) int resultProviderID;
@property (readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property (readonly, nonatomic) NSData *comparableRepresentation;

+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)mapsIdentifier;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapsIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlace:(id)a0;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithBasemapId:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1;
- (id)shortDebugDescription;

@end
