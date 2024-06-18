@class EKPredictedLocationOfInterest, NSString, NSData, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying>

@property (copy, nonatomic) NSString *contactLabel;
@property (readonly, nonatomic) BOOL isStructured;
@property (retain, nonatomic) NSString *routing;
@property (copy, nonatomic) NSData *mapKitHandle;
@property (readonly, nonatomic) BOOL hasKnownSpatialData;
@property (retain, nonatomic) NSString *address;
@property (nonatomic, getter=isImprecise) BOOL imprecise;
@property (retain, nonatomic) EKPredictedLocationOfInterest *predictedLOI;
@property (readonly, nonatomic, getter=isPrediction) BOOL prediction;
@property (copy, nonatomic) NSString *derivedFrom;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (nonatomic) double radius;

+ (Class)frozenClass;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (id)locationWithTitle:(id)a0;
+ (id)_stringByStrippingControlCharactersFromString:(id)a0;
+ (id)displayLabelForContact:(id)a0 unlocalizedLabel:(id)a1;
+ (id)locationWithCalLocation:(id)a0;
+ (id)locationWithGEOMapItem:(id)a0;
+ (id)locationWithMapItem:(id)a0;
+ (id)locationWithPlacemark:(id)a0;

- (BOOL)_reset;
- (id)latitude;
- (id)cacheKey;
- (void)setLongitude:(id)a0;
- (void)setLatitude:(id)a0;
- (id)longitude;
- (BOOL)isEqualToLocation:(id)a0;
- (id)referenceFrame;
- (void)setReferenceFrame:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)geoURLString;
- (void)_clearGeoLocationCache;
- (id)calLocation;
- (id)initWithPersistentObject:(id)a0 objectForCopy:(id)a1;
- (id)radiusRaw;
- (void)setRadiusRaw:(id)a0;
- (void)updateFromMapItem:(id)a0;

@end
