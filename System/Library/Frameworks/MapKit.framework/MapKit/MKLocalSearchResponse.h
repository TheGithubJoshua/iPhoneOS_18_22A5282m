@class NSArray;

@interface MKLocalSearchResponse : NSObject

@property (readonly, nonatomic) NSArray *mapItems;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } boundingRegion;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithMapItems:(id)a0 boundingRegion:(id)a1;

@end
