@class NSMutableArray;

@interface _PSCluster : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableArray *convexHull;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (BOOL)containsPoint:(id)a0;
- (id)pointAtIndex:(unsigned long long)a0;
- (void)addPointToCluster:(id)a0;
- (void)clearCluster;
- (long long)compareByAnglePoint:(id)a0 andPoint:(id)a1 withRef:(id)a2;
- (void)computeConvexHull;
- (id)initWithPoints:(id)a0 andHull:(id)a1;
- (int)orientationOfPoints:(id)a0 and:(id)a1 and:(id)a2;
- (void)sortArray:(id)a0;

@end
