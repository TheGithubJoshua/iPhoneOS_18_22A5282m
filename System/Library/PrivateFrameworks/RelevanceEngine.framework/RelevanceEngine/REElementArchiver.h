@class RERelevanceEngine;

@interface REElementArchiver : NSObject {
    RERelevanceEngine *_engine;
}

- (void).cxx_destruct;
- (id)_supportedClasses;
- (id)initWithEngine:(id)a0;
- (id)elementWithData:(id)a0;
- (id)dataWithElement:(id)a0;

@end
