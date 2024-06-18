@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (BOOL)_responseStatusIsIncomplete;
- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasMUID;
- (int)_resultProviderID;
- (unsigned long long)_muid;
- (id)_identifier;
- (BOOL)_hasResolvablePartialInformation;
- (id)_styleAttributes;
- (BOOL)_hasResultProviderID;
- (int)referenceFrame;
- (BOOL)isValid;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)initWithLinkedPlace:(id)a0;

@end
