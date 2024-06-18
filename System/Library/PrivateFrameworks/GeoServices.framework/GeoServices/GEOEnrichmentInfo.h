@class NSString, GEOPDEnrichmentInfo;

@interface GEOEnrichmentInfo : NSObject {
    GEOPDEnrichmentInfo *_enrichmentInfo;
}

@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) NSString *showcaseId;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEnrichmentInfo:(id)a0;
- (id)pdEnrichmentInfo;

@end
