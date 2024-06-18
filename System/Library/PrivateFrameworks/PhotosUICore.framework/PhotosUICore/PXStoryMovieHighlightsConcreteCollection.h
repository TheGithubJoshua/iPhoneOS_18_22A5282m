@class NSString, NSMutableDictionary;

@interface PXStoryMovieHighlightsConcreteCollection : NSObject <PXStoryMovieHighlightsCollection, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_highlightsByAssetId;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)movieHighlightsForDisplayAsset:(id)a0;

@end
