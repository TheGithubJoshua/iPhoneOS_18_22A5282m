@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)init;
- (id)_generateMap;
- (void).cxx_destruct;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;

@end
