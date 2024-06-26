@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject {
    NSArray *_metadata;
    NSDictionary *_summaryCounts;
    BOOL _hasOnlyFiles;
}

@property (nonatomic) unsigned long long preferredSizeClass;

- (void).cxx_destruct;
- (id)summary;
- (id)initWithMetadata:(id)a0;
- (id)summaryMetadata;
- (id)_summaryCounts;
- (id)_summarySubtitle;
- (id)summaryImages;

@end
