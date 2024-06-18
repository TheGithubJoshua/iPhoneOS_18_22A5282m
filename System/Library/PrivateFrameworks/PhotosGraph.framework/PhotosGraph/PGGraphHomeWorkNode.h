@class MARelation, PGGraphHomeWorkNodeCollection, NSString, MANodeFilter;

@interface PGGraphHomeWorkNode : PGGraphOptimizedNode <PGGraphLocalizable, PGAssetCollectionFeature> {
    NSString *_uuid;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _centroidCoordinate;
    NSString *_label;
}

@property (class, readonly, nonatomic) MANodeFilter *homeFilter;
@property (class, readonly, nonatomic) MANodeFilter *workFilter;
@property (class, readonly, nonatomic) MARelation *ownerOfHomeWork;
@property (class, readonly, nonatomic) MARelation *addressOfHomeWork;

@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;

- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (BOOL)isHome;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyDictionary;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 uuid:(id)a1;

@end
