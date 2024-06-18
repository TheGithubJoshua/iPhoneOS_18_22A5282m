@class NSArray;

@interface VKLabelMarker : VKMarker {
    struct shared_ptr<md::LabelMarker> { struct LabelMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelMarker;
}

@property (nonatomic) BOOL isDragged;
@property (nonatomic) BOOL useVKSelectionBalloon;
@property (readonly, nonatomic) NSArray *shields;
@property (readonly, nonatomic) NSArray *transitSystems;
@property (readonly, nonatomic) NSArray *dataIconImageKeys;
@property (readonly, nonatomic) NSArray *iconImageKeys;
@property (readonly, nonatomic) NSArray *imageKeys;
@property (readonly, nonatomic) NSArray *relatedTexts;
@property (readonly, nonatomic) NSArray *relatedSubTexts;

+ (id)markerWithLabelMarker:(const void *)a0;

- (struct { double x0; double x1; })coordinate;
- (BOOL)isSelected;
- (BOOL)isOccluded;
- (id)locale;
- (id)routeInfo;
- (unsigned long long)venueBuildingID;
- (id)mapRegion;
- (int)featureType;
- (unsigned long long)venueID;
- (unsigned long long)clientFeatureID;
- (id)text;
- (int)sortKey;
- (short)venueFloorOrdinal;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)animationID;
- (unsigned long long)venueLevelID;
- (unsigned long long)businessID;
- (BOOL)hasBusinessID;
- (BOOL)isSelectable;
- (unsigned long long)venueComponentID;
- (BOOL)isVisible;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; })_bounds;
- (float)buildingFaceAzimuth;
- (id)featureHandles;
- (id)incident;
- (BOOL)isTransit;
- (id)trafficCamera;
- (id)subtext;
- (unsigned long long)countFeatureIDs;
- (struct CGPoint { double x0; double x1; })calloutAnchorPointWithSnapToPixels:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calloutAnchorRect;
- (unsigned long long)clusterFeatureCount;
- (unsigned char)externalFeatureCategory;
- (id)featureAnnotation;
- (BOOL)isCluster;
- (BOOL)isFlyoverTour;
- (BOOL)isOnRoute;
- (BOOL)isRouteAnnotation;
- (BOOL)isRouteEta;
- (BOOL)isTrafficIncident;
- (BOOL)isTransitLine;
- (unsigned char)pickedLabelBalloonBehavior;
- (id)routeAnnotations;
- (int)selectionType;
- (void)setLabelPressed:(BOOL)a0;
- (float)facingDirection;
- (BOOL)isRouteWaypoint;
- (const void *)labelMarkerImpl;
- (BOOL)isTrafficCamera;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calloutAnchorRect:(BOOL)a0;
- (id)arWalkingFeature;
- (float)buildingHeight;
- (id)clusterContentBounds;
- (id)clusterFeatureAnnotations;
- (id)clusterWaypointInfos;
- (struct { double x0; double x1; double x2; })coordinate3D;
- (id)debugAnchorPointString;
- (unsigned long long)elementCount;
- (const unsigned long long *)featureIDs;
- (unsigned long long)featureLabelIdentifier;
- (BOOL)hasBuildingFaceAzimuth;
- (BOOL)hasFacingDirection;
- (BOOL)hasVenueLookInsideFloorOrdinal;
- (id)initWithLabelMarkerPtr:(const void *)a0;
- (BOOL)isARWalkingFeature;
- (BOOL)isAlongSelectedTransitLine;
- (BOOL)isClusterChild;
- (BOOL)isLabelHitAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 selectableLabelsOnly:(BOOL)a1;
- (BOOL)isLeafCluster;
- (BOOL)isOneWayArrow;
- (BOOL)isTextVisible;
- (BOOL)isTransitAccessPoint;
- (BOOL)isVenueButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lateralCalloutAnchorRect;
- (id)parentClusterLabelMarker;
- (BOOL)positionOfInterest:(struct { double x0; double x1; } *)a0 zoom:(float *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenCollisionBounds;
- (unsigned char)venueComponentType;
- (short)venueLookInsideFloorOrdinal;
- (id)waypointInfo;

@end