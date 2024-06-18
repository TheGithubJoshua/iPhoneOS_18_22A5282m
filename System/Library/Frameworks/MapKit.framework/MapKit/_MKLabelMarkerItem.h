@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (struct { double x0; double x1; })coordinate;
- (BOOL)_hasMUID;
- (id)_place;
- (unsigned long long)_muid;
- (id)_identifier;
- (BOOL)_hasResolvablePartialInformation;
- (id)_styleAttributes;
- (int)referenceFrame;
- (BOOL)isValid;
- (id)name;
- (void).cxx_destruct;
- (int)_venueFeatureType;
- (BOOL)_isTransitDisplayFeature;
- (id)_venueInfo;
- (BOOL)_hasVenueFeatureType;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
