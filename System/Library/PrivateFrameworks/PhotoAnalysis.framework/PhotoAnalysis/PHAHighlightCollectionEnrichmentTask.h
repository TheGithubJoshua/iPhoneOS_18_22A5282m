@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
