@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject {
    id<PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (id)key;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)geotaggable;
- (id)initWithGeotaggable:(id)a0 andKey:(id)a1;

@end
