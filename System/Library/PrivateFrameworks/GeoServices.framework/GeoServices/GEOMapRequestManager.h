@class geo_isolater, NSMutableSet;

@interface GEOMapRequestManager : NSObject {
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestComplete:(id)a0;
- (void)trackRequest:(id)a0;

@end
