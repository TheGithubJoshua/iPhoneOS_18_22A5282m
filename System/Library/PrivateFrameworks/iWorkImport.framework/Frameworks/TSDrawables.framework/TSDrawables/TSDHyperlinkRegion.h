@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)a0 bezierPath:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithURL:(id)a0 bezierPath:(id)a1;

@end
